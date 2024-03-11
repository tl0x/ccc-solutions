// code by taylor 
// time complexity: Not sure. O(R * C)? (R = rows, C = cols)
// got some help from online. tricky dfs. will probably be revisiting this problem.

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

const int dr[] = {1, 0, -1, 0, 1, -1, 1, -1};
const int dc[] = {0, 1, 0, -1, 1, -1, -1, 1};

string word;

int dfs_search(vector<vector<char> > grid, int r, int c, int current_letter, bool is_turned, int dr, int dc) {
    int rows = grid.size();
    int cols = grid[0].size();

    if (!(0 <= r && r < rows && 0 <= c && c < cols)) {
        return 0;
    }
    if (grid[r][c] != word[current_letter]) {
        return 0;
    }
    if (current_letter == word.length()-1) {
        return 1;
    }

    int ans = dfs_search(grid, r + dr, c + dc, current_letter+1, is_turned, dr, dc); // checks for straight line solutions
    if (!is_turned) { // if statement here to ensure we only turn once.
        // if haven't turned yet, check every perpendicular letter if there is a solution. if none, backtrack and try again.
        ans += dfs_search(grid, r + dc, c - dr, current_letter+1, true, dc, -dr);
        ans += dfs_search(grid, r - dc, c + dr, current_letter+1, true, -dc, dr);
    }

    return ans;
 }

int main() {
    optimize();
    cin >> word;

    int rows, cols; cin >> rows >> cols;
    vector<vector<char> > grid(rows, std::vector<char>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == word[0]) { // start from second letter to avoid turning at the start.
                for (int a = 0; a < 8; a++) {
                    ans += dfs_search(grid, i + dr[a], j + dc[a], 1, false, dr[a], dc[a]); 
                }
            }
        }
    }

    cout << ans << endl;
}