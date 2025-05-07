#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& graph, vector<bool>& visited) {
    // Create a queue for BFS
    queue<int> q;
    
    // Mark the start node as visited and enqueue it
    visited[start] = true;
    q.push(start);
    
    while (!q.empty()) {
        // Dequeue a node from the queue
        int node = q.front();
        q.pop();
        
        // Process the node (you can do something with this node here)
        cout << node << " ";
        
        // Get all neighbors of the current node
        for (int neighbor : graph[node]) {
            if(!visited[neighbor] ){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
    int n, m;  // Number of nodes and edges
    cin >> n >> m;
    
    // Create an adjacency list for the graph
    vector<vector<int>> graph(n + 1); // 1-indexed graph
    
    // Read the edges
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v); // Undirected graph, add v to u's list
        graph[v].push_back(u); // Undirected graph, add u to v's list
    }
    
    vector<bool> visited(n + 1, false); // Mark all nodes as unvisited
    
    // Perform BFS starting from node 1
    bfs(1, graph, visited);
    
    return 0;
}
