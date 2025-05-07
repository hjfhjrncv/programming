#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5;
vector<long long> seg(4 * MAX_N), lazy(4 * MAX_N);
vector<long long> arr;

// Function to build the segment tree
void build(int node, int start, int end) {
    if (start == end) {
        seg[node] = arr[start]; // Leaf node holds the value of the array
    } else {
        int mid = (start + end) / 2;
        build(2 * node, start, mid); // Left child
        build(2 * node + 1, mid + 1, end); // Right child
        seg[node] = min(seg[2 * node], seg[2 * node + 1]); // Internal node is the minimum of the children
    }
}

// Function to apply any pending updates
void push(int node, int start, int end) {
    if (lazy[node] != 0) {
        seg[node] += lazy[node]; // Apply the pending update to the current node

        if (start != end) { // If not a leaf node, propagate to the children
            lazy[2 * node] += lazy[node]; // Left child
            lazy[2 * node + 1] += lazy[node]; // Right child
        }
        lazy[node] = 0; // Reset the lazy value after applying it
    }
}

// Function to update a range [l, r] by a value
void range_update(int node, int start, int end, int l, int r, long long val) {
    push(node, start, end); // Apply any pending updates

    if (r < start || end < l) return; // No overlap
    if (l <= start && end <= r) { // Total overlap
        lazy[node] += val; // Mark the node for lazy update
        push(node, start, end); // Apply the update
        return;
    }

    // Partial overlap
    int mid = (start + end) / 2;
    range_update(2 * node, start, mid, l, r, val); // Update the left child
    range_update(2 * node + 1, mid + 1, end, l, r, val); // Update the right child

    seg[node] = min(seg[2 * node], seg[2 * node + 1]); // Update the current node value
}

// Function to query the value at a specific index
long long point_query(int node, int start, int end, int idx) {
    push(node,start,end);

    if(start == end){
        return seg[node];

    }

    int mid= (start + end) /2 ;
    if
}

int main() {
    int n, q;
    cin >> n >> q;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build the initial segment tree
    build(1, 0, n - 1);

    vector<int> ans;
    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int a, b, u;
            cin >> a >> b >> u;
            range_update(1, 0, n - 1, a - 1, b - 1, u);
        } else {
            int k;
            cin >> k;
            ans.push_back(point_query(1, 0, n - 1, k - 1));
        }
    }

    // Output the results of queries of type 2
    for (int res : ans) {
        cout << res << "\n";
    }

    return 0;
}
