#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long ;
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin>>n;
        vector<long> a(n);
        vector<long> b(n);
        for (size_t i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (size_t i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        long long coint = 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] || a[i] +1 == b[i])
               coint++;
        }
        if (coint == n)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        


    }
    return 0;
}