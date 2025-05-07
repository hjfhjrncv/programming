#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX_N = 2e5; 
vector<ll> seg(4 * MAX_N);

void build(vector<ll>& arr, ll node, ll start, ll end) {
    if (start == end) {
        seg[node] = arr[start];
    } else {
        ll mid = (start + end) / 2;
        build(arr, 2 * node, start, mid);
        build(arr, 2 * node + 1, mid + 1, end);
        seg[node] = seg[2 * node] ^ seg[2 * node + 1];
    }
}

ll query(ll node, ll start, ll end, ll L, ll R) {
    if (R < start || L > end) return 0;
    if (L <= start && end <= R) return seg[node];
    ll mid = (start + end) / 2;
    return query(2 * node, start, mid, L, R) ^ query(2 * node + 1, mid + 1, end, L, R);
}

int main() {
    ll n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    build(arr, 1, 0, n - 1);
    vector<ll> results;
    while (q--) {
        ll a, b;
        cin >> a >> b;
        results.push_back(query(1, 0, n - 1, a - 1, b - 1));
    }
    for (ll res : results) {
        cout << res << endl;
    }
    return 0;
}
