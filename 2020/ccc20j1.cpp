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
    int s, m, l;
    cin >> s >> m >> l;
    int happiness = 1 * s + 2 * m + 3 * l;

    if (happiness >= 10) {
        cout << "happy";
    }
    else {
        cout << "sad";
    }
}