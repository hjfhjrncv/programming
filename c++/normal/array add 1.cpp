#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<long>& a, long n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            a[i] += 1;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] % a[i - 1] == 0) {
            a[i] += 1;
        }
    }

    for (long num : a) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        solve(arr, n);
    }
    return 0;
}
