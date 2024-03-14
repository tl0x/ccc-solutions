// code by taylor
// O(n^3) approach by looping through all substrings
// editorial states that it is more efficient to use Manacher's algorithm, but the small input size means that a brute force approach is feasible.

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

bool check(string str) {
    int i = 0;
    int j = str.length() - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }

    return true;
}

int main() {
    optimize();

    int ans = 0;
    string line; cin >> line;
    for (int i = 0; i < line.length(); i++) {
        for (int j = i; j < line.length(); j++) {
            string sub = line.substr(i, j-i+1);
            if (check(sub)) {
                ans = max(ans, (int) sub.length());
            }
        }
    }

    cout << ans << endl;
}