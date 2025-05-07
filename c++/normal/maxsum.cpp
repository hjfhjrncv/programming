#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
using  ll = long long;
using namespace std;


ll mod = 1000000007;

ll solve(vector<ll> a,ll n,ll k){
    ll sum = 0;
    ll best = 0;

    for (int i = 0; i < n; i++)
    {
        sum = max(a[i],sum+a[i]);
        best = max(sum,best);
    }
    
    ll localsum = 0;

    for (int i = 0; i < n; i++)
    {
        localsum += a[i];
    }

    ll ans = 0;

    while ((k--))
    {
        ans = (localsum+best) % mod;
        localsum = localsum+ best;

        best = best + best;
    }
    
    


    return ans;
    
    
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll m =solve(a,n,k);

        cout<<m<<endl;

    }
    return 0;
}