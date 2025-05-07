#include "molecules.h"

#include <vector>
#include <algorithm>

using namespace std;

vector<int> find_subset(int l, int u, vector<int> w) {
    int n = w.size();
    vector<pair<int,int>> in;

    for (int i = 0; i < n; i++)
    {
        in.push_back({w[i],i});
    }
    
    sort(in.begin(),in.end());

    int sum = 0;
    int left = 0,right = 0;
    
    while (right < n)
    {
        sum+= in[right].first;
        if(sum>u){
            sum-=in[left].first;
            --left;
        }
        if(sum>=l && sum<=u){
            vector<int> ans;

            for (int i = left; i < right; i++)
            {
                ans.push_back({in[i].second});
            }
            return ans;
        }
    }
    

    return {};
}
