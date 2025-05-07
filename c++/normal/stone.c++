#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<int> a(n);
        

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (a.size() == 1 || a.size() %2 == 1){
            cout<<"Mike"<<endl;
        }
        else{
            if (a.size() % 2 ==0){
                int mins = 0;
                for (int i = 0; i < n; ++i)
                    if (a[i] < a[mins])
                        mins = i;

                if (mins % 2 == 0) cout << "Joe\n";
                else cout << "Mike\n";
            }
        }
    }
    return 0;
}