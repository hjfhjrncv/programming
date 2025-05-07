#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n,m;
    cin>>n>>m;
    vector<long> a(n);
    vector<long> b(n,0);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
           if(i == a.size()-1){
              b[i] = labs(a[0] - a[i]);
           }
           else{
              b[i] = labs(a[i] - a[i+1]);
           }
        }
        a = b;
        
        
    }
    for (int i = 0; i <n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    

    
    return 0;
}


