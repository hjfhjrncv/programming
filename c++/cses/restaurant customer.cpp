#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> events;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back({a, +1});
        events.push_back({b, -1});
    }

    sort(events.begin(), events.end());

    int cu = 0, mx = 0;

    for (auto [time, count] : events) {
        cu += count;
        mx = max(mx, cu);
    }

    cout << mx << endl;

    return 0;
}
