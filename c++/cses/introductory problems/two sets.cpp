#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>

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




int main() {
    ll n;
    cin >> n;
    
    ll sum = (n*(n+1))/2;
    if(sum%2 == 1){
        cout<<"NO"<<endl;
    }

    else{
        cout<<"YES"<<endl;
        unordered_set<ll> s1,s2;
        ll target = sum/2;


        int t = n;

        for (int i = n; i >=1; i--)
        {
            if(target >= i){
                s1.insert(i);
                target -= i;
            }

            else{
                s2.insert(i);
            }
        }


        cout << s1.size() << endl;
        for (int x : s1) cout << x << " ";
        cout << endl;

        cout << s2.size() << endl;
        for (int x : s2) cout << x << " ";
        cout << endl;
        
    }

    return 0;
}
