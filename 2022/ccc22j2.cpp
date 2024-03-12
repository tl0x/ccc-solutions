// code by taylor
// time complexity: O(n)
// simple number traversal. no need to put in a list or similar.

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

int main() {
    optimize();
    int n;
    cin >> n;

    int starplayers = 0;
    for (int i = 0; i < n; i++) {
        int points, fouls;
        cin >> points >> fouls;

        int starrating = points * 5 - fouls * 3;
        if (starrating > 40) {
            starplayers++;
        }
    }

    if (starplayers == n) {
        cout << starplayers << "+";
    }
    else {
        cout << starplayers;
    }
}