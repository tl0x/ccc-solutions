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
    int count = 0;
    for (int i = 0; i < 6; i++) {
        char c; cin >> c;
        if (c == 'W') {
            count++;
        }
    }

    if (count == 1 || count == 2) {
        cout << 3;
    }
    else if (count == 3 || count == 4) {
        cout << 2;
    }
    else if (count == 5 || count == 6) {
        cout << 1;
    }
    else {
        cout << -1;
    }
}