#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long ;
using namespace std;

int main(){
    long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        string s;
        string newsting ;
        cin>>s;
        if(s.size() == 1){
            cout<<s<<endl;
        }
        else{
            s[0] = s[s.size()-1];
            cout<<s<<endl;
        }
    }
    return 0;

}