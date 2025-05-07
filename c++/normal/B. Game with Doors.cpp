#include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int l,r;
        cin>>l>>r;
        int L,R;
        cin>>L>>R; 
        int il = max(l,L);
        int ir = min(r,R);
        int ans;
        if (il>ir)
        {
            cout<<1<<endl;
        }
        else
        {
            ans = ir - il;

            if (min(l,L) < il) ans++;
            if (max(r,R) > ir) ans ++;
            cout<<ans<<endl;
        }
        
        
    }
    

    return 0;
}