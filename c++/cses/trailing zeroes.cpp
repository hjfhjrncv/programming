#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long res = 0;
    while (n >= 5) {
        n /= 5;
        res += n;
    }
    cout << res << endl;
    return 0;
}
