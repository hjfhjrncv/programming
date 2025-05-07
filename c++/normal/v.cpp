#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long  solve(long n,long k,vector<long> a){
    sort(a.begin(),a.end());

    vector<long> pr;
    pr[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pr[i] = pr[i-1] + a[i];
    }
    long ans =0;
    for (int i = 0; i < k+1; i++)
    {
        ans = max(ans,pr[n-(k-i)]-pr[2*i]);
    }
    cout<<ans<<endl;
    return ans;
    
    
    

}

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,k;
        cin>>n>>k;
        vector<long> a;

        for (int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        
        solve(n,k,a);
    }
    return 0;
}