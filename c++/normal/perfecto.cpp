#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <string>
#include <cmath>
using namespace std;

using ll = long long;

void solve(ll n){
    vector<long long > a(n);
    vector<long long > b(n);

    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
        b[i] = i + 1;
    }

    ll sum = 0;

    for (int i = 0; i < n; i++) {
        ll sq = sqrt(sum + a[i]);

        if (!(sq * sq == sum + a[i])) {
            sum += a[i];
        } else {
           
            if (i + 1 < n) {
                swap(a[i], a[i + 1]);
            }
            sum += a[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        
        ll d = (n * (n + 1)) / 2;
        ll sq = sqrt(d);

        if (sq * sq == d) {
            cout << -1 << endl;
        } else {
            solve(n);
        }
    }
    
    return 0;
}
