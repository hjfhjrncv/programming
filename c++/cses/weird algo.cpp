#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;


int main(){
    ll t;
    cin>>t;
    vector<ll> a;
    a.push_back(t);
    while(t>1){
        
       
            if(t%2==0){
                t= t/2;
                a.push_back(t);
            }
            else{
                t = (t*3)+1;
                a.push_back(t);
            }
        
    }
    for(ll num : a){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}