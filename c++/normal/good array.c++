#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long ;
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for (long i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long sum =0;
        for (long i = 0; i < n; i++)
        {
            sum += a[i];
        }
        long long target = 1;
        long long onecount = count(a.begin(),a.end(),target);
        if(sum >= onecount+n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
        
        
        
    }
    return 0;
}