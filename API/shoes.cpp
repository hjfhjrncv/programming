#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



long long count_swaps(vector<int> s) {
    int cnt = 0;
    for (int i = 0; i < s.size(); i+=2)
    {
        int left = s[i];
        for (int j = i+1; i < s.size(); j++)
        {
            if(s[j] == -left){
                for (int k = j; k < i+1; --k)
                {
                    swap(s[i],s[i-1]);
                    cnt++;
                }
                
            }
        }
        
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cout << count_swaps(a) << endl;
    return 0;
}
