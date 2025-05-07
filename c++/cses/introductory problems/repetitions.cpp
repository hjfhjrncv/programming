#include <iostream>
#include <iostream>
#include <vector>
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
    while (n--) {
        ll a, b;
        cin >> a >> b;
        ll ans = modpow(a, b);
        cout << ans << endl;
    }
}
