#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;




void solve(ll n, ll q , vector<ll> a,vector<ll> b ){
    for (int i = 0; i < q; i++)
    { 
        unordered_set<ll> s;
        if(!(s.count(b[i]))){
            ll val = pow(2, b[i]);
            ll incre = pow(2,b[i] -1);

            for (int j = 0; j < n; j++)
            {
                if(a[j] % val == 0){
                    a[j] = a[j] + incre;
                }

            }
            s.insert(b[i]);
        }
        else{
            continue;
        }
        
    }
    for (ll num : a)
    {
        cout<<num<<" ";
    }
    cout << endl;
    

    
}
int main(){
    ll t;
    cin>>t;
    while(t--) {
        ll n,q;
        cin>>n>>q;
        vector<ll> a(n);
        vector<ll> b(q);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin>>b[i];
        }

        solve(n,q,a,b);
        

    }
    return 0;
}