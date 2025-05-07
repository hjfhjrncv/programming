#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, k, q;
        cin >> n >> k >> q;
        vector<long> arr(n);
        
        // Read the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long total = 0; // Total number of valid subarrays
        int left = 0;        // Left pointer
        int right = 0;       // Right pointer

        // Traverse the array
        while (right < n) {
            if (arr[right] <= q) {
                
                if (len >= k) {
                    
                    total += (len - k + 1);
                }
                right++; 
            } else {
                
                left = right + 1; 
                right++;           
        }

        cout << total << endl;
    }

    return 0;
}