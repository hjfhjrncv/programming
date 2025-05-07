#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;


long suml(const vector<int>& arr, int l, int r) {
    long  sum = 0;
    for (int i = l; i <= r; i++) {
        sum += arr[i];
    }
    return sum;
}


int mx(const vector<int>& arr, int l, int r) {
    int  m = arr[l];  
    for (int i = l + 1; i <= r; i++) {
        m = max(m, arr[i]);  
    }
    return m;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        int left = 0;
        int right = n - 1;
        vector<int> vec;
        string line;
        cin.ignore();
        getline(cin, line);
        stringstream ss(line);
        int num;

        while (ss >> num) {
            vec.push_back(num);  
        }

        int ans = 0;
        
        if (vec.size() == 1) {
            if (vec[0] == 0) ans += 1;  
            cout << ans << endl;
        }
        
        else {
            while (left <= right) {
                long  s_sum = suml(vec, left, right);
                long  s_max = mx(vec, left, right);

                
                if (s_sum - s_max == s_max) {
                    ans += 1;
                }
                
                right -= 1;  
            }
            cout << ans << endl;
        }
    }
    return 0;
}
