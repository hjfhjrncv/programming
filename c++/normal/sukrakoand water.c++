#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    
   
        long n, k;
        cin >> n >> k;
        vector<long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a.size() == 1) {
            cout << 0 << endl;
            
        }
        long ans = 0;
        while (a.size() > 1) {
            long last = a.size() - 1;
            long available = n;
            long count = 0;
            if (k >= last && k % last == 0) {
                count += k / last;
            } else {
                if (k <= last) {
                    count += 1;
                } else {
                    count += (k / last) + 1;
                }
            }
            if (count <= available) {
                ans += 1;
                a.pop_back();
                a.erase(a.begin(), a.begin() + (count - 1));
            } else {
                break;
            }
        }
        cout << ans << endl;
    
    return 0;
}
