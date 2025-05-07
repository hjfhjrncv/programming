#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
using ll = long long;
 
int main() {
    int n,m,k;
    cin >> n>>m>>k;
    vector<ll> a(n);
    vector<ll> b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
 
    sort(a.begin(),a.end());
    
    sort(b.begin(),b.end());
    
    ll count=0;
    for (int i = 0; i < m; i++)
    {
        
        if(a[i]>= b[i] -k && a[i] <= b[i]+k){
           count++;
        }
 
    }
 
    cout<<count<<endl;
    
    
    
    return 0;
}