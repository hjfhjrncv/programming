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




int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);

    if (n < 4) {
        cout << "NO SOLUTION" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }

        for (int i = 0; i < n; i++) {
            vector<ll> temp;
            for (int j = 1; j < n; j += 2) {
                temp.push_back(j + 1);
            }
            for (int j = 0; j < n; j += 2) {
                temp.push_back(j + 1);
            }
            a = temp;
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
