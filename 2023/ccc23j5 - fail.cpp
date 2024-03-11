// 0/15 flawed bfs approach. redoing.

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

const int dr[] = {-1, 1, 0, 0, -1, -1, 1, 1};
const int dc[] = {0, 0, -1, 1, -1, 1, -1, 1};

int bfs(vector<vector<char> > grid, int startr, int startc, int rows, int cols, string word) {
    queue<pair<int, int> > q;
    int visited[rows][cols];
    memset(visited, 0 , sizeof(visited));
    visited[startr][startc] = 1;

    pair<int, int> temp; temp.first = startr; temp.second = startc;
    q.push(temp);

    int current_letter = 1;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        int r, c; r = current.first; c = current.second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nr = r + dr[i];
            int nc = c + dc[i];

            if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && visited[nr][nc] == 0) {
                visited[nr][nc] = 1;

                if (grid[nr][nc] == word[current_letter]) {
                    pair<int, int> temp; temp.first = nr; temp.second = nc;
                    cout << grid[nr][nc] << " " << word[current_letter] << " " << temp.first << " " << temp.second << endl;
                    q.push(temp);
                    current_letter++;
                    if (current_letter == word.length()) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}


int main() {
    optimize();
    string word; cin >> word;
    int rows, cols; cin >> rows >> cols;
    vector<vector<char> > grid(rows, std::vector<char>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    cout << bfs(grid, 3, 6, rows, cols, word) << endl;
}