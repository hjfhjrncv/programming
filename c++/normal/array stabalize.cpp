#include <bits/stdc++.h>
using namespace std;

long solve(vector<int>& arr) {
    sort(arr.begin(), arr.end());
   

    long mx = arr[arr.size() - 1];
    arr.pop_back();
    mx = arr[arr.size() - 1];
    long mi = arr[0];
    long ans = mx - mi;
    cout << ans << endl;
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    solve(s);
    return 0;
}