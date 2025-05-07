#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

using ll = long long;

void solve(vector<ll> a, vector<ll> b, ll n, ll m) {
    

    ll pre =LLONG_MAX;
    for (int i = 0; i < n; i++)
    {   
        
        if(a[i] < pre){
           
           a[i] = b[0] - a[i];  
        }
        if(a[i] < pre){
           cout<<"NO"<<endl;
           return;
        }

        pre = a[i];
    }
        ///debug
        
    
    
    if (is_sorted(a.begin(), a.end())) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    long t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;

        vector<ll> a(n);
        vector<ll> b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        solve(a, b, n, m);
    }
    return 0;
}
