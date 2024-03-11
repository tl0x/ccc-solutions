// code by someone else and im trying to figure this out lol
// time complexity O(T^3)
// ignore the comments probably inaccurate

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();


int main() {

    optimize()
    int n, t;
    const int inf = 1e9;

    cin >> n >> t;
    vector<pair<int, int> > trees(t);

    for (int i = 0; i < t; i++) {
        cin >> trees[i].first >> trees[i].second;
    }

    t += 1;

    // add the origin as a "pseudo-tree", the point will be needed to calculate.
    trees.emplace_back(0, 0);
    int ans = 0;

    /* 
    1. Go through pairs of unique trees. 
    2. Take the row of one and the column of the other. 
    3. Then start looping through every other tree.
    4. Calculate the largest square possible in both the vertical and horizontal directions, select the largest.
    */
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < t; j++) {
            // if tree i and j refer to the same tree, skip. also skip if i = t-1 because it is guaranteed to have been passed through.
            if (i == j && i != t - 1) {
                continue;
            }
            int tree1row = trees[i].first;
            int tree2col = trees[j].second;

            // start from largest --> smallest
            int cur = inf;

            for (int k = 0; k < t; k++) {
                
                // skip if comparing current trees selected (tree i and tree j)
                if (k == i || k == j) {
                    continue;
                }

                // calculate the largest vertical
                if (trees[k].first > tree1row && trees[k].second > tree2col) {
                    int dx = trees[k].first - tree1row - 1;
                    int dy = trees[k].second - tree2col - 1;
                    cur = min(cur, max(dx, dy));
                }
            }

            if (min(n - tree1row, n - tree2col) < cur) {
                cur = min(n - tree1row, n - tree2col);
            }
            cout << "tree i: " << i << " tree j: " << j << "\n";
            cout << "current: " << cur << endl;
            ans = max(ans, cur);
        }
    }

    cout << ans << '\n';
  
    return 0;
}