#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;


using ll = long long;
ll mod = 1000000007;

ll modpow(ll a, ll b) {
    ll result = 1;
    a %= mod;
    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return result;
}




int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll mx = a[0];
    ll count =0;

    for (int i = 1; i < n; i++)
    {
        if(a[i] < mx){
           count += llabs(mx - a[i]);
           a[i] = mx;

           
        }
        mx = max(mx,a[i]);
        


    }

    cout<<count<<endl;
    

    
    return 0;
}