#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
const ll mod = 1000000007;

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

ll solve(ll n, vector<pair<ll, ll>> arr) {
    ll ans = 0;
    for (ll i = 0; i < n; ++i) {
        ll h = 0;
        ll mx = -1e18;
        ll mnn = 1e18;
        for (ll j = i; j < n; ++j) {
            h += arr[j].second;
            mx = max(mx, arr[j].first);
            mnn = min(mnn, arr[j].first);
            ans = max(ans, h - (mx - mnn));
        }
    }
    return ans;
}

int main() {
    ll n;
    cin >> n;

    vector<pair<ll, ll>> vec(n);

    for (int i = 0; i < n; i++) {
        ll k, m;
        cin >> k >> m;
        vec[i] = {k, m};
    }

    sort(vec.begin(), vec.end());
    ll ans = solve(n, vec);
    cout << ans << endl;

    return 0;
}



