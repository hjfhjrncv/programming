#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long modpow(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << modpow(2, n) << endl;
    return 0;
}
