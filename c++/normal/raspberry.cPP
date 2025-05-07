#include <iostream>
#include <vector>
#include <cmath>
#include <climits> // Added for LLONG_MAX

using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        long n,k;
        cin >> n>>k;
        vector<long> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int  sum =1;
        for (int i = 0; i < n; i++)
        {
            sum = sum * a[i];
        }
        
        if(sum%k == 0){
            cout<<0<<endl;
        }
        else{
            if(k == 2 || k==3 || k==5){
               long mini = a[0];
               for (int i = 1; i < n; i++)
               {
                 mini = min(mini,k - a[i]);
                 
               }
               long ans = k - mini;
               cout<<mini<<endl;
               
            }
        }
    }
    return 0;
}