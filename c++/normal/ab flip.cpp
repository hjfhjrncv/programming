#include <bits/stdc++.h>
using namespace std;




long sumsolve(const vector<int> & arr){
     long sum =0;
     for (int num : arr){
        sum += num;
     }
     return sum;
}
int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the string
        vector<int>s(n) ;
        vector<int>b(n) ;
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long total = sumsolve(s);
        long totalb = sumsolve(b);

        
        
    return 0;
}