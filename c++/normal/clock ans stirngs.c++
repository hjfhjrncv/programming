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
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        string s;
        for (int i = 1; i < 13; i++)
        {
            if (i == a|| i == b) s+= 'a';
            if (i == c|| i == d) s+= 'b';
        
        }
        cout<<(s == "abab" || s== "baba" ? "YES\n" : "NO\n")<<endl;

        
    }
    return 0;
}