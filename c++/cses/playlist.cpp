#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> songs(n);
    for (int i = 0; i < n; ++i) cin >> songs[i];

    multiset<int> window;
    int left = 0, max_len = 0;

    for (int right = 0; right < n; ++right) {
        while (window.count(songs[right])) {
            window.erase(songs[left]);
            ++left;
        }
        window.insert(songs[right]);
        max_len = max(max_len, right - left + 1);
    }

    cout << max_len << endl;
    return 0;
}
