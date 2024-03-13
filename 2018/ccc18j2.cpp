#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>

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
    int n; cin >> n;
    int x = 0;

    string lot1, lot2; cin >> lot1 >> lot2;
    for (int i = 0; i < n; i++) {
        if (lot1[i] == 'C' && lot2[i] == 'C') {
            x++;
        }
    }

    cout << x << endl;
}