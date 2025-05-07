#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <stack>
using namespace std;


int main() {
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long monday,tuesday,wednesday,thursday,friday = 0;
        while (n--)
        {
           long a,b,c,d,e;
           cin>>a>>b>>c>>d>>e;
           if(a == 1) monday++;
           if(b==1) tuesday++;
           if(c==1) wednesday++;
           if(d==1) thursday++;
           else friday++;
           
        }
        
        vector<long long> count(5);

        count = {monday,tuesday,wednesday,thursday,friday};

        long pc = 0;
        for (int i = 0; i < 5; i++)
        {
            if(count[i] >= (n/2)){
                cout<<count[i]<<" ";
                pc++;
                
            }
        }

        
        if(pc >= 2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}

