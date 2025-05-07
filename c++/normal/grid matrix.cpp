#include <bits/stdc++.h>
#include <vector>
#include <sstream>
#include <algorithm>
#include<iostream>

using namespace std;

long long findMin(const vector<int> &arr) {
    long long minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        int num;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        long long mina = findMin(a);
        long long minb = findMin(b);
        long long  total =0;
        for (int i = 0; i < n; i++)
        {
            total += b[i] + mina;
        }
        long long tj =0 ;
        for (int i = 0; i < n; i++)
        {
            tj += a[i] + minb;
        }
        cout<<min(total,tj)<<endl;
        
    }
    return 0;
}