#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;


using ll = long long;

void solve(ll n,ll k){
    unordered_set<long> st;
    vector<long> a(n,0);
    long m =1;
    for (long i = 1; i < n + 1; i++)
    {
        st.insert(i);
    }
    
    for (int i = k-1; i < n; i += k)
    {
       a[i] = m;
       st.erase(m);
       m+=1;
    }
     
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 0 && !st.empty()){
            auto it = st.begin();
            a[i] = *it;
            st.erase(it);
        }
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
    


    
   
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        solve(n,k);
    }
    return 0;

}
