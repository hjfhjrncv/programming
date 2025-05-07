#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

long solve(long n, string s, char c) {
    long ans = LONG_MIN;
    long last = -1;
    vector<long> arr(2 * n, -1);
    
    for (int i = 0; i < 2 * n; i++) {
        if (s[i] == 'g') {
            last = i;
        }
        arr[i] = last;
        
    }
    
    for (int i = 0; i < n; i++)
    {
        if(s[i] == c){
            ans = max(ans,arr[i] -i);
        }
    }


    
    cout<<ans<<endl;
    return ans;
    
}

int main() {
    long t;
    cin >> t;
    
    while (t--) {
        long n;
        char r;
        cin >> n >> r;
        string s;
        cin >> s;
        s = s + s;
        solve(n, s, r);
        
    }

    return 0;
}
