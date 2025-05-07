#include <iostream>
#include <vector>
using namespace std;

long mod = 1000000007; // 1e9 +7
vector<long> dp(1000001,-1);


int calculate(vector<long> &coins ,long n, long x){
    if(x ==0){
        return 0;
    }
    if(x< 0){
        return mod;
    }

    int r = mod;

    if(dp[x] != -1){
        return dp[x];
    }

    for (int i = 0; i < n; i++)
    {
        r = min(r,1+ calculate(coins,n,x - coins[i]));
    }
    dp[x] = r;
    return r;
}

int main(){

    long n,x;
    cin>>n>>x;
    vector<long> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }

    vector<long> dp(x+1,mod);
    long h = calculate(coins,n,x);
    if(h == mod){
        cout<<-1<<endl;
    }
    else{
        cout<<h<<endl;
    }
    
    return 0;
}