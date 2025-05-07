#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long median = a[n / 2];
    long long cost = 0;
    for (int i = 0; i < n; i++) cost += abs(a[i] - median);
    cout << cost << endl;
    return 0;
}
