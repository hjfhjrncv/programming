#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#define ll long long ;
using namespace std;


 

int main() {
    long n,q;
    cin >> n>>q;;
    vector<long > a(n);
    vector<long > prefix(n);
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    prefix[0] = 0;
    for (int  i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + a[i-1];
        
    
    
    }
    while(q--){
        long x,y;
        cin>>x>>y;
        long long minimum = prefix[x] - prefix[x-y];
        cout<<minimum<<endl;
    }
    
    
    return 0;
}