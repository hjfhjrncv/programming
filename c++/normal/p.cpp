#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n;
        cin >> n;  
        vector<int> vec(n);
        
        
        for (int l = 0; l < n; l++) {
            cin >> vec[l];
        }

        long long ans = 0;

        int maxs = 0;
        for (int i = 1; i < n; i++) {
            if (vec[i] < vec[i-1]) {
                ans += vec[i-1] - vec[i];  
                maxs = max(maxs,vec[i-1] - vec[i]);
                vec[i] = vec[i-1];  
                
                
                
            }
        }
        
        
        if ( ans != 0){
            cout<<ans+maxs<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
