#include <iostream>
using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;

    for (ll k = 1; k <= n; ++k) {
        ll total_positions = (k * k) * (k * k - 1) / 2;
        ll attacking_positions = 0;
        if (k >= 3) {
            attacking_positions = 4 * (k - 1) * (k - 2);
        }
        cout << (total_positions - attacking_positions) << endl;
    }

    return 0;
}
