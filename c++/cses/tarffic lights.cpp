#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <iterator>

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
    ll n, x;
    cin >> n >> x;
    
    multiset<ll> positions;
    multiset<int> lengths;

    positions.insert(0);
    positions.insert(x);
    lengths.insert(x);

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;

        auto it = positions.upper_bound(p);

        int right = *it;
        int left = *prev(it);
        positions.insert(p);

        lengths.erase(lengths.find(right - left));
        lengths.insert(right - p);
        lengths.insert(p - left);

        cout << *lengths.rbegin() << " ";
    }
    struct Tree {
        typedef int T;
        static constexpr T unit = INT_MIN;
        T f(T a, T b) { return max(a, b); } // (any associative fn )
        vector<T> s; int n;
        Tree(int n = 0, T def = unit) : s(2*n, def), n(n) {}
        void update(int pos, T val) {
        for (s[pos += n] = val; pos /= 2;)
        s[pos] = f(s[pos * 2], s[pos * 2 + 1]);
        }
        T query(int b, int e) { // query [ b , e)
        T ra = unit, rb = unit;
        for (b += n, e += n; b < e; b /= 2, e /= 2) {
        if (b % 2) ra = f(ra, s[b++]);
        if (e % 2) rb = f(s[--e], rb);
        }
        return f(ra, rb);
        }
        };

    return 0;
}
