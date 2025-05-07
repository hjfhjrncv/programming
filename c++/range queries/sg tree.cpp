#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5; 
vector<int> seg(4 * MAX_N);

void build(vector<int>& arr, int node, int start, int end) {
    if(start == end){
        seg[node] = arr[start];
    }
    else{
        int mid = (start+end)/2;
        build(arr,2*node,start,mid);
        build(arr,2*node+1,mid+1,end);
        seg[node] = min(seg[2*node],seg[2*node+1]);
    }
}

int query(int node, int start, int end, int L, int R) {
    if (R < start || L > end) return INT_MAX;
    if (L <= start && end <= R) return seg[node];

    int mid = (start + end) / 2;
    return min(query(2 * node, start, mid, L, R),
               query(2 * node + 1, mid + 1, end, L, R));
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    build(arr, 1, 0, n - 1);

    vector<int> ans;
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        ans.push_back(query(1, 0, n - 1, a - 1, b - 1));
    }

    for (int res : ans) cout << res << "\n";

    return 0;
}
