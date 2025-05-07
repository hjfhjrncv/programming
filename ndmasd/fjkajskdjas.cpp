#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        long long n;
        cin>>n;

        vector<int> df;
        
        for (int i = 0; i < 40; i++)
        {
            
            if(s[i] == 1 || s[i] == '1' ){
                df.push_back(i+1);
                
            }
        }
        
        set<long long> se;

        for (int i = 0; i < df.size(); i++)
        {
            for (int i = 0; i < n; i = i+i)
            {
               if(!(set.count(i)))
            }
            
        }
        
        
    }
    
    return 0;
}