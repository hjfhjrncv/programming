#include <iostream>
#include <vector>

using namespace std;

vector<bool> visited;
vector<vector<int>> adj;
vector<vector<int>> components;

void dfs(int s, vector<int>& comp) {
    if (visited[s]) return;
    visited[s] = true;
    comp.push_back(s);
    for (auto u : adj[s]) {
        if (!visited[u]) {
            dfs(u, comp);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1, false);
    
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            vector<int> component;
            dfs(i, component);
            components.push_back(component);
        }
    }
    
    cout<<components.size()-1<<endl;

    if((components.size()-1) > 0){
        for (int i = 0; i < components.size()-1; i++)
        {
            cout<<components[i][0]<<" "<<components[i+1][0]<<endl;
        }
        
    }
    
    return 0;
}

