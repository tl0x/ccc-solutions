#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>
#include <cmath>
#include <climits>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end()
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

vector<int> dijkstra(int vertices, vector<vector<pair<int, int> > > adj, int source) { 
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

    vector<int> distances(vertices, INT_MAX);

    distances[source] = 0;
    pair<int, int> start; start.first = 0; start.second = source;
    pq.push(start);

    while (!pq.empty())  {
        int node = pq.top().second;
        int current_distance = pq.top().first;

        pq.pop();

        for (pair<int, int>& it : adj[node]) {
            int v = it.first; // vertice
            int w = it.second; // weight

            if (current_distance + w < distances[v]) {
                distances[v] = current_distance + w;
                pair<int, int> next; next.first = current_distance + w; next.second = v;
                pq.push(next);
            }
        }
    }

    return distances;
}


int main() {
    optimize();
    int v; int e; cin >> v >> e;
    int start = 0;

    vector<vector<pair<int,int> > > adj(v);
    set<pair<int, int> > verifier; 

    for (int i = 0; i < e; i++) {
        int a, b, w; cin >> a >> b >> w;
        adj[a-1].push_back(make_pair(b-1, w));
        adj[b-1].push_back(make_pair(a-1, w));
    }

    vector<int> distance = dijkstra(v, adj, start);

    for (int i = 0; i < v; i++) {
        if (distance[i] == INT_MAX) {
            cout << -1 << endl;
            continue;
        }
        cout << distance[i] << endl;
    }
}