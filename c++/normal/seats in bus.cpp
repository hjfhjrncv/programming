#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<long> sea(n);
        for (int i = 0; i < n; i++) {
            cin >> sea[i];
        }

        vector<bool> seats(n + 2, false);
        seats[sea[0] - 1] = true;

        bool valid = true;

        for (int i = 1; i < n; i++) {
            if ((sea[i] > 1 && seats[sea[i] - 2] == true) || seats[sea[i]] == true) {
                seats[sea[i] - 1] = true;
            } else {
                valid = false;
                break;
            }
        }

        if (valid) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
