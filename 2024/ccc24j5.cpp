// code by taylor
// either use dfs or bfs to traverse the grid. i chose bfs for practice.
// flood fill type question without much tricks

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cstring>

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

int bfs(vector<vector<int> >& grid, int start_row, int start_col) {
    int rows = grid.size();
    int cols = grid[0].size();

    int ans = 0;
    
    queue<pair<int, int> > q;
    
    int visited[rows][cols];
    memset(visited, 0, sizeof(visited));
    visited[start_row][start_col] = 1;
    
    pair<int, int> start; start.first = start_row; start.second = start_col;
    q.push(start);

    ans += grid[start_row][start_col]; // the starting position is not counted in the algo so added beforehand
    
    while (!q.empty()) {
        pair<int, int> current_node = q.front();
        int r = current_node.first, c = current_node.second;
        q.pop();
                
        for (int i = 0; i < 4; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            
            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && visited[nr][nc] == 0) {
                visited[nr][nc] = 1; // mark as visited
                ans += grid[nr][nc]; // persumed valid, so add value of pumpkin to answer

                if (grid[nr][nc] != 0) { // if encountered hay, then don't add to queue. (dead end)
                    pair<int, int> temp; temp.first = nr; temp.second = nc;
                    q.push(temp);
                }
            }
        }
    }
    return ans;
}

int main() {
    optimize();

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
                temp.push_back(5);
            }
            else if (ch == 'L') {
                temp.push_back(10);
            }
        }

        harvest.push_back(temp);
    }

    int row, col; cin >> row >> col;
    cout << bfs(harvest, row, col) << endl;

}