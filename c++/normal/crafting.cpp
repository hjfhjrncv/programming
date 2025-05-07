#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<long> a(n);
        vector<long> b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        long long sum_a=0;
        long long sum_b=0;
        long long total_deficit = 0;
        long long total_surplus = 0;
        for (int i = 0; i < n; i++) {
            sum_a+= a[i];
            sum_b += b[i];
            if (a[i] < b[i]) {
                total_deficit += (b[i] - a[i]);
            } else {
                total_surplus += (a[i] - b[i]);
            }
        }
        sum_a = ((sum_a - total_deficit*(n-1)) + total_deficit);
        if(sum_a >=0 && sum_b>= 0)
            if(total_deficit>=0 && total_surplus>=0)

                if(sum_a<sum_b){
                    cout<<"NO"<<endl;
                }
                else{
                    if ((total_surplus) >= (total_deficit*(n-1))) {
                        cout << "YES" << endl;
                    } else {
                        cout << "NO" << endl;
                    }
                }
            else{
                cout<<"NO"<<endl;
            }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}