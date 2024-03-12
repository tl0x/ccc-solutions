// code by taylor
// took way longer than i should, but while loop jank got me i guess

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cmath>

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
    int p, n, r; cin >> p >> n >> r;
    int start = n;
    int i = 1;
    while (n <= p) {
        n += start*pow(r, i);
        i++;
    }

    cout << i-1 << endl;
}