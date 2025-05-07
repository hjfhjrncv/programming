#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <string>
using namespace std;


using ll = long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count_1=0;
        ll count_0 = 0;
        
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 0 || s[i] == '0'){
                count_0+=1;
            }
            else{
                count_1+=1;
            }
        }
        if(count_1>=count_0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;

}