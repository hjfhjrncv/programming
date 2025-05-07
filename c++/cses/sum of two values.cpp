#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>

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
    ll n,x;
    cin >> n >> x;
    unordered_map<int,int> map;


    for (int i = 0; i < n; i++)
    {
        int a;
        cin>> a;

        int comp = x -a;

        if(map.count(comp)){
           cout<<map[comp] + 1  <<" "<< i+1<<endl;
           return 0;
        }

        map[a] = i;
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    
    return 0;
}

