#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <queue>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

const int dr[] = {-1, 1, 0, 0};
const int dc[] = {0, 0, -1, 1};

// Function to perform BFS in a 2D grid
void bfs(vector<vector<int> >& grid, int start_row, int start_col) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    // Queue for BFS
    queue<pair<int, int> > q;
    
    // Mark the starting cell as visited
    vector<vector<bool> > visited(rows, vector<bool>(cols, false));
    visited[start_row][start_col] = true;
    
    // Enqueue the starting cell
    pair<int, int> start; start.first = start_row; start.second = start_col;
    q.push(start);
    
    // BFS loop
    while (!q.empty()) {
        // Dequeue the current cell
        pair<int, int> current_node = q.front();
        int r = current_node.first, c = current_node.second;
        q.pop();
        
        // Process the current cell
        cout << "Visiting cell (" << r << ", " << c << ")" << endl;
        
        // Explore neighbors
        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            // Check if the neighbor is within the grid bounds and not visited
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && !visited[nr][nc]) {
                // Mark the neighbor as visited and enqueue it
                visited[nr][nc] = true;
                pair<int, int> temp; temp.first = nr; temp.second = nc;
                q.push(temp);
            }
        }
    }
}

int main() {
    // Example 2D grid
    int r, c; cin >> r >> c;
    vector<vector<int> > harvest;
    for (int i = 0; i < r; i++) {
        vector<int> temp;
        string row; cin >> row;

        for (char ch: row) {
            if (ch == '*') {
                temp.push_back(0);
            }
            else if (ch == 'S') {
                temp.push_back(1);
            }
            else if (ch == 'M') {
                temp.push_back(2);
            }
            else if (ch == 'L') {
                temp.push_back(3);
            }
        }

        harvest.push_back(temp);
    }
    
    // Start BFS from cell (0, 0)
    bfs(harvest, 0, 0);
    
    return 0;
}