#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>

using namespace std;

void bfs(const vector<vector<int>>& graph, int start) {
    unordered_set<int> visited;  // To track visited nodes
    queue<int> q;  // Queue for BFS

    q.push(start);
    visited.insert(start);

    while(!q.empty()){
        int node = q.front();
        q.pop();

        cout<<node<<" ";

        for (int neigh : graph[node])
        {
            if(visited.find(neigh) == visited.end()){
                q.push(neigh);
                visited.insert(neigh);
            }
        }
        
    }
}

int main() {
    // Graph as an adjacency list
    vector<vector<int>> graph = {
        {},         // Node 0 (unused)
        {2, 3},     // Node 1 -> 2, 3
        {1, 4,6},     // Node 2 -> 1, 4
        {1, 5},     // Node 3 -> 1, 5
        {2},        // Node 4 -> 2
        {3},
        {1,2,3,4},
        {7,10}
            // Node 5 -> 3
    };

    cout << "BFS Traversal starting from node 1: ";
    bfs(graph, 1);  // Output: 1 2 3 4 5

    return 0;
}

