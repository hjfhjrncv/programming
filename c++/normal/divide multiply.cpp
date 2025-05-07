#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;


void solve(long long a,long long b){
   
    if(a==b){
        cout<<0<<endl;
    
    }

    

    else{ 
            long op =0;
            if(a<b){
                swap(a,b);
            }

    
            while(a>b){
                if(a%8 ==0 && a/8 >= b ){
                    op+=1;
                    a= a/8;
                    
                }
                else if(a%4 ==0 && a/4 >= b ){
                    op+=1;
                    a= a/4;
                    
                }
                else if(a%2 ==0 && a/2 >= b ){
                    op+=1;
                    a= a/2;
                }
                else{
                    break;
                }
            }
            if(a == b){
                cout<<op<<endl;
            }
            else{
                cout<<-1<<endl;
            }
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        solve(a,b);
    }
    return 0;
}