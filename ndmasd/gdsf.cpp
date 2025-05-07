#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    long q;
    cin>>q;
    

    for (int i = 0; i < q; i++)
    {
        bool f = false;
        char n,b;
        
        cin>>n>>b;
        
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {   
            if(s[i] == n){
                for (int j = i; j < n; j++)
                {
                    if(s[j] == b){
                        cnt++;
                    }
                }
            }
            else{
                continue;
            }
            
            
        }
        cout<<cnt<<endl;
    }
    return 0;
}

