#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> c = b;
        reverse(c.begin(), c.end());

        if (a == b || a == c) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    return 0;
}
