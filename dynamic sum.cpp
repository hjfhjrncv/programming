// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_N = 2e5; 
// vector<long long> seg(4 * MAX_N);

// void build(vector<long long>& arr, int node, int start, int end) {
//     if (start == end) {
//         seg[node] = arr[start];
//     } else {
//         int mid = (start + end) / 2;
//         build(arr, 2 * node, start, mid);
//         build(arr, 2 * node + 1, mid + 1, end);
//         seg[node] = seg[2 * node] + seg[2 * node + 1];
//     }
// }

// long long query(int node, int start, int end, int L, int R) {
//     if (R < start || L > end) return 0;
//     if (L <= start && end <= R) return seg[node];
    
//     int mid = (start + end) / 2;
//     return query(2 * node, start, mid, L, R) + query(2 * node + 1, mid + 1, end, L, R);
// }

// void update(int node, int start, int end, int idx, long long value) {
//     if (start == end) {
//         seg[node] = value;
//     } else {
//         int mid = (start + end) / 2;
//         if (idx <= mid) {
//             update(2 * node, start, mid, idx, value);
//         } else {
//             update(2 * node + 1, mid + 1, end, idx, value);
//         }
//         seg[node] = seg[2 * node] + seg[2 * node + 1];
//     }
// }

// int main() {
//     long long n, q;
//     cin >> n >> q;
//     vector<long long> arr(n);
//     for (long long i = 0; i < n; i++) cin >> arr[i];

//     build(arr, 1, 0, n - 1);
    
//     while (q--) {
//         long long type;
//         cin >> type;
//         if (type == 1) {
//             long long k, u;
//             cin >> k >> u;
//             update(1, 0, n - 1, k - 1, u);
//         } else {
//             long long L, R;
//             cin >> L >> R;
//             cout << query(1, 0, n - 1, L - 1, R - 1) << "\n";
//         }
//     }
    
//     return 0;
// }
