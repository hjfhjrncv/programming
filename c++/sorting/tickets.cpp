#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tickets(n), customers(m);
    for (int i = 0; i < n; ++i) cin >> tickets[i];
    for (int i = 0; i < m; ++i) cin >> customers[i];

    
    
    int i =0;
    for (int max_price : customers) {
        
        while (i < n && tickets[i] > max_price) i++;
        if (i < n && tickets[i] <= max_price ) {
            cout << tickets[i] << endl;
            i++;
            tickets[i] = -1;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
