#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

using ll = long long;

int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll sum = 0;
    ll mx = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum = max(a[i], sum + a[i]);
        mx = max(mx, sum);
    }
    cout << mx << endl;
}
