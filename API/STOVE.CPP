#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<vector<int>> arr;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back({x, x + 1});
    }

    
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
       if(ans.empty() || ans[i][0] > ans.back()[1]){
        ans.push_back(arr[i]);
       }
       else{
        ans.back()[1] = max(ans.back()[1],arr[i][1]);
       }
    }
    
    while(ans.size()>k){
        int idx = -1;
        int mn = INT_MAX;

        for (int i = 0; i < (int)ans.size() -1 ; i++)
        {
            int gap = abs(ans[i][1] - ans[i+1][0]);
            if(gap<mn){
                mn  = min(mn,gap);
                idx = i;
            }
           

        }
        vector<int> merged = {
            min(ans[i][0],ans[i+1][0]),
            max(ans[i][1],ans[i+!][1]);
        }
        
        ans.erase(ans.begin() + idx);
        ans.erase(ans.begin() + idx);
        ans.push_back(ans.begin() + idx, merged);

        


    }



    return 0;
}
