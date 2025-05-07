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
    string s;
    cin>>s;
     
    ll mx_l=0;
    ll c_l =0;

    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1]){
            c_l++;
        }
        else{
            mx_l = max(mx_l,(c_l + 1 ));
            c_l = 0;
        }


    }
    if(c_l +1  > mx_l){
        mx_l = c_l + 1;
    }

    cout<<mx_l<<endl;
    
    return 0;
}
