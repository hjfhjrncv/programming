#include <iostream>
#include <vector>
using namespace std;


int solve(vector<int>  a,int n ){
    vector<int> dp(n,1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(a[i]>a[j]){
                dp[i] = max(dp[j]+1,dp[i]);
            }
        } 
    }
    int mk;
    for (int i = 0; i < n; i++)
    {
        mk = max(mk,dp[i]);
    }
    return mk;
}
int main(){
    int n;
    cin>>n;
    vector<int>  a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int ans = solve(a,n);
    cout<<ans<<endl;
}