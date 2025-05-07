#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    
    vector<int> a(n);
    
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ///reverse(a.begin(),a.end());
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    long long ans = 0;
    long left = 0;
    long right = a.size()-1;
    while(left<right){
        if((a[left] + a[right]) > x){
            ans++;
            right--;
        }
        if((a[left] + a[right]) <= x){
            ans++;
            right--;
            left++;
        }
        if(right== left){
            ans++;
        }

    } 
    cout<<ans<<endl;
    
    return 0;
}
