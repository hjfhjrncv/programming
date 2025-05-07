#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

using ll = long long;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];

    unordered_map<ll, ll> modCount;
    modCount[0] = 1;

    ll prefix = 0;
    ll count = 0;

    for (ll i = 0; i < n; ++i) {
        prefix += a[i];
        ll mod = ((prefix % k) + k) % k;
        count += modCount[mod];
        modCount[mod]++;
    }

    cout << count << endl;
}
