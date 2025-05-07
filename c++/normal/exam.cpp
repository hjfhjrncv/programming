#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;


using i64 = long long;

void solve() {
    int n, k;
    cin >> n >> k;
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<int> counts;
    for (auto& [key, value] : freq) {
        counts.push_back(value);
    }
    
    sort(counts.begin(), counts.end());

    for (int i = 0; i < counts.size() - 1; i++) {
        if (counts[i] > k) {
            cout << counts.size() - i << "\n";
            return;
        }
        k -= counts[i];
    }
    cout << 1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
}
