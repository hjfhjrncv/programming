#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, k;
        cin >> n >> k;
        vector<long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        long max_length = 1;
        long currl = 1;
        
        for (int i = 1; i < n; i++) {
            if (abs(arr[i] - arr[i-1]) <= k) {
                currl++;
                if (currl > max_length) {
                    max_length = currl;
                    cout<<currl<<endl;
                }
            } else {
                currl = 1;
            }
        }
        
        long remove_count = n - max_length;
        cout << remove_count << endl;
    }
    return 0;
}