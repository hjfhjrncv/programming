// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// vector<string> grid;
// pair<int, int> start, end;

// // direction arrays: up, right, down, left
// int dx[] = { -1, 0, 1, 0 };
// int dy[] = { 0, 1, 0, -1 };

// bool visited[1000][1000];
// int distance[1000][1000]; // stores the minimum distance

// bool isValid(int x, int y) {
//     return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#' && !visited[x][y];
// }

// int bfs() {
//     queue<pair<int, int>> q;
//     q.push(start);
//     visited[start.first][start.second] = true;
//     distance[start.first][start.second] = 0;

//     while (!q.empty()) {
//         auto [x, y] = q.front(); q.pop();

//         if (make_pair(x, y) == end) return distance[x][y]; // return the distance when we reach 'B'

//         for (int i = 0; i < 4; i++) {
//             int nx = x + dx[i];
//             int ny = y + dy[i];

//             if (isValid(nx, ny)) {
//                 visited[nx][ny] = true;
//                 distance[nx][ny] = distance[x][y] + 1;
//                 q.push({ nx, ny });
//             }
//         }
//     }

//     return -1; // if no path found
// }

// int main() {
//     cin >> n >> m;
//     grid.resize(n);
    
//     for (int i = 0; i < n; i++) {
//         cin >> grid[i];
//         for (int j = 0; j < m; j++) {
//             if (grid[i][j] == 'A') start = { i, j };
//             if (grid[i][j] == 'B') end = { i, j };
//         }
//     }

//     int result = bfs();
//     if (result != -1) {
//         cout << "YES\n";
//         cout << result << "\n";
//     } else {
//         cout << "NO\n";
//     }

//     return 0;
// }
