// code by taylor
// time complexity: O(n)
// easy points. just read input from while loop until you find a yobi to stop at.

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

int main() {
    optimize();
    int d; cin >> d;

    while (true) {
        int x; cin >> x;
        if (x < d) {
            d += x;
        }
        else {
            cout << d << endl;
            break;
        }
    }
}