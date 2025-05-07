#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000;
int n, m;
vector<string> grid;
vector<vector<bool>> visited;

// Directions: up, down, left, right
int dx[] = {-1,1,0,0};
int dy[] = {0,1,0,-1};

bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] != '#' && !visited[x][y];
}

void dfs(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; ++i) {
        int nx = x + d[i];
        int ny = y + d[i];
        if (is_valid(nx, ny)) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    int startX, startY;
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'A') {
                startX = i;
                startY = j;
            }
        }
    }

    dfs(startX, startY);

    // Example usage: print all reachable cells
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (visited[i][j])
                cout << "Cell (" << i << "," << j << ") is reachable\n";

    return 0;
}










#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> parent;

// Directions and their corresponding moves
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
char move_char[4] = { 'U', 'D', 'L', 'R' };

bool is_valid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m &&
           grid[x][y] != '#' && !visited[x][y];
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));
    parent.assign(n, vector<pair<int, int>>(m, { -1, -1 }));

    pair<int, int> start, end;

    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == 'A') start = { i, j };
            if (grid[i][j] == 'B') end = { i, j };
        }
    }

    queue<pair<int, int>> q;
    q.push(start);
    visited[start.first][start.second] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (is_valid(nx, ny)) {
                visited[nx][ny] = true;
                parent[nx][ny] = { x, y };
                q.push({ nx, ny });
            }
        }
    }

    if (!visited[end.first][end.second]) {
        cout << "NO\n";
        return 0;
    }

    // Reconstruct path
    string path;
    pair<int, int> curr = end;
    while (curr != start) {
        pair<int, int> p = parent[curr.first][curr.second];
        for (int i = 0; i < 4; ++i) {
            if (p.first + dx[i] == curr.first && p.second + dy[i] == curr.second) {
                path += move_char[i];
                break;
            }
        }
        curr = p;
    }
    reverse(path.begin(), path.end());

    cout << "YES\n";
    cout << path.length() << "\n";
    cout << path << "\n";

    return 0;
}
