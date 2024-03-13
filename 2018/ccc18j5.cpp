// code by taylor
// took 10x longer then i should. BFS distance counting question. 
// doable with djikstra's? 

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <queue>
#include <cstring>
#include <climits>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

bool visited[10001];
int distances[10001];
int minimum_distance = INT_MAX;

int main() {
    // gameplan: construct an nodeanency list and then find a path, and then the shortest path. (bfs)
    optimize();
    int pages; cin >> pages;

    vector<int> graph[10001]; // this is an array of vectors, not a vector of length 10001.
    vector<int> book_ends; // track where the book ends; we are only interested in the ends of the book

    for (int i = 1; i <= pages; i++) {
        int m; cin >> m;
        for (int j = 1; j <= m; j++) {
            int temp; cin >> temp;
            graph[i].push_back(temp);
        }
        if (m == 0) {
            book_ends.push_back(i); // if end, push to book_ends
        }
    }

    queue<int> q;
    q.push(1);

    visited[1] = true;
    distances[1] = 1;

    while (!q.empty()) {
        int current = q.front(); q.pop();
        if (find(book_ends.begin(), book_ends.end(), current)!=book_ends.end()) {
            // update minimum_distance if current node is an end node
            minimum_distance = min(minimum_distance, distances[current]); 
        }

        for (int node : graph[current]) {
            if (!visited[node]) {
                visited[node]= true;
                q.push(node);
                distances[node]= distances[current] + 1; // updates the distances of all adjecent nodes
            }
        }
    }

    int counter = 0;
    for (int i = 1; i <= pages; i++) {
        if (visited[i]) {
            counter++; // if theres the same amount of visited nodes as there are pages, then all nodes are visited and in turn reachable.
        }
    }

    if (counter == pages) {
        cout << "Y" << endl;
    }
    else {
        cout << "N" << endl;
    }
    cout << minimum_distance << endl;
}