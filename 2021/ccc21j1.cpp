// code by taylor
// arithmetic and simple logic. hopefully self explanatory.

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
    int p, b; // p = pressure b = temperature
    cin >> b;
    p = 5 * b - 400;

    cout << p << endl;
    if (p > 100) {
        cout << -1 << endl;
    }
    else if (p == 100) {
        cout << 0 << endl;
    }
    else {
        cout << 1 << endl;
    }
}