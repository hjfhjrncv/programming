#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int m1,m2;
        cin>>m1>>m2;
        int d;
        cin>>d;
        int moves;
        int mid;
        if (d>m1 and d>m2)
        {
            moves = n - max(m1,m2);
            
        }
        else if (d<m1 and d<m2)
        {
            moves = min(m1,m2 ) -1;
            cout<<20<<endl;
        }
        else
        {
            mid = (m1+m2) /2;
            moves = min(abs(mid-m1),abs(mid-m2));

           
        }
        cout<<moves<<endl;
        
        
        
        
        
    }
    return 0;
}