#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long mod = 1000000007;

int main() {
    
    long long a,b,n;
    cin>>a>>b>>n;
    long cnt;
    for (long long i = a; i <= n; i+=a)
    {
        for (long long j = b; j <= n; j+=b)
        {
            if((i % a ==0 && i%b != 0) && (j%b==0 && j%a != 0)){
               cnt++;
               cnt = cnt%mod;
            }
        }
        
    }
    cout<<cnt<<endl;

    
    return 0;
}