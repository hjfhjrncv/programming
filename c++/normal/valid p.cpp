#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
vector<int> isvalid(int n) {
    if (n == 1 || n == 2) {
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i + 1;
        }
        return perm;
    } else if (n % 2 == 1) {
        return {-1};
    } else {
        vector<int> perm(n);
        for (int i = 0; i < n; i++) {
            perm[i] = i + 1;
        }
        return perm;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec = isvalid(n);
        if (vec[0] == -1) {
            cout << -1 << endl;
        } else {
            if (vec.size() > 1) {
                for (int i = 0; i < vec.size() - 1; i += 2) {
                    swap(vec[i], vec[i + 1]);
                }
            }
            for (int i = 0; i < vec.size(); ++i) {
                cout << vec[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}