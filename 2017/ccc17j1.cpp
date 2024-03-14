// code by taylor
// if else logic

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>

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

    int x, y; cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << 1;
    }
    if (x > 0 && y < 0) {
        cout << 4;
    }
    if (x < 0 && y > 0) {
        cout << 2;
    }
    if (x < 0 && y < 0) {
        cout << 3;
    }
}