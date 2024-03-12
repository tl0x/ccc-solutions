// code by taylor
// this question made me broken. tricky bfs. much easier then it might seem, but i got stuck on it anyways.

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

bool visited[1005][1005];
vector<vector<pair<int,int> > > graph(1e6+5);

bool bfs(vector<vector<pair<int, int> > > graph, int n, int m) {
    queue<pair<int, int> > q;
    pair<int, int> start_pos; start_pos.first = n; start_pos.second = m;
    q.push(start_pos);
    visited[n][m] = true;

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int r = current.first, c = current.second;

        for (pair<int, int> v : graph[r * c]) { // <-- graph[r * c] is the node(s) that the algorithm can go
            if (v.first == 1 && v.second == 1) {
                return true;
            } 
            if (!visited[v.first][v.second]) {
                visited[v.first][v.second] = true;
                // cout << v.first << " " << v.second << endl;
                q.push(v);
            }
        }
    }
    return false;
}

int main() {
    // gameplan: construct a graph with the info given and do bfs to find a path

    /*
    EXPLANATION
    The reason we do bfs backwords because it is more convenient. This is because it is much easier to determine which nodes the player
    originated from, because if we were to calculate which squares the players could go, we would need to calculate the factors at each step, but
    finding where a player could have originated from is as easy as finding the product of the row and column numbers and looping through all
    the nodes with the value.
    */
    optimize();
    int n, m; cin >> m >> n;

    memset(visited, false, sizeof(visited));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            pair<int, int> temppair; temppair.first = i+1; temppair.second = j+1;
            // cout << "x: " << x << " row: " << temppair.first <<  " col: " << temppair.second << endl;
            graph[x].push_back(temppair); // make into adjacency list
        }
    }

    if (bfs(graph, m, n)) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}