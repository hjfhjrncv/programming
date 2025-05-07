#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve(long a,long b){
    long op=0;
    if(a==b){
        cout<<2<<endl;
        return;
    }
    else if(b>a){
        cout<<1<<endl;
        return;
    }
    else{
        
        long re;
        while(a>0){
            a = a/b;
            op++;
            if(a<=b){
                b = b+1;
                a = a/b;
                op+=2;
                

            }
        }
    }
    cout<<op<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        solve(a,b);
    }
    return 0;
}