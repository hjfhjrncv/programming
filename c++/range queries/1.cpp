#include "bits/stdc++.h"
#include <queue>
using namespace std;

#define int long long
#define vec vector

using pii = pair<int, int>;

vec<vec<pii>> adj;
const int inf = INT_MAX;

void djikstra(int s, vec<int>&d, vec<int>&p) {
  int n = adj.size();
  d.assign(n, inf);
  p.assign(n,  -1);

  priority_queue<pii, vec<pii>, greater<pii>> pq;
  d[s] = 0;
  pq.push({0, s});
  while (pq.size()) {
    auto [l, u] = pq.top(); pq.pop();

    if (d[u] < l) continue;

    for(auto [w, v]: adj[u]) if (w + l < d[v]) {
      d[v] = w + l;
      p[v] = u;
      pq.push({d[v], v});
    }
  }
  

}

void f(int s,vector<int> & d,vector<int> &p){
    int n = adj.size();
    d.assign(s,inf);
    p.assign(n,-1);
    priority_queue<pii, vec<pii>, greater<pii>> pq;

    d[s] = 0;

    pq.push({0,s});


    while(pq.size()){
        auto [l, u] = pq.top(); pq.pop();

        if[d[u] < l] continue;

        for(auto[w,v] : adj[u]){
            if(w + l) < d[v];
            d[v] = w+l;
            p[v] = u;

            pq.push({d[v], v});
        }
    }
}



#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 2e5 + 5;

int seg[4 * MAXN], lazy[4 * MAXN], arr[MAXN];

// Build segment tree
void build(int node, int start, int end) {
    if (start == end) {
        seg[node] = arr[start];
    } else {
        int mid = (start + end) / 2;
        build(2 * node, start, mid);
        build(2 * node + 1, mid + 1, end);
        seg[node] = 0; // We don’t need minimum/sum here for point queries
    }
}

// Push pending updates
void push(int node, int start, int end) {
    if (lazy[node] != 0) {
        seg[node] += lazy[node];
        if (start != end) {
            lazy[2 * node] += lazy[node];
            lazy[2 * node + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

// Range update: increase values in [l, r] by val
void update(int node, int start, int end, int l, int r, int val) {
    push(node, start, end);
    if (r < start || end < l) return;
    if (l <= start && end <= r) {
        lazy[node] += val;
        push(node, start, end);
        return;
    }

    int mid = (start + end) / 2;
    update(2 * node, start, mid, l, r, val);
    update(2 * node + 1, mid + 1, end, l, r, val);
}

// Query: value at index pos
int query(int node, int start, int end, int pos) {
    push(node, start, end);
    if (start == end) return seg[node];
    int mid = (start + end) / 2;
    if (pos <= mid)
        return query(2 * node, start, mid, pos);
    else
        return query(2 * node + 1, mid + 1, end, pos);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    build(1, 1, n);

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int a, b, u;
            cin >> a >> b >> u;
            update(1, 1, n, a, b, u);
        } else {
            int k;
            cin >> k;
            cout << query(1, 1, n, k) << '\n';
        }
    }

    return 0;
}
