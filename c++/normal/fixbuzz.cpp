#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;  
        
        
        int g = n / 15;
        
        
        int c = g * 3;
        
        
        for (int i = g * 15; i <= n; ++i) {
            if (i % 3 == i % 5) {
                c++;
            }
        }
        
        
        cout << c << endl;
    }
    
    return 0;
}
