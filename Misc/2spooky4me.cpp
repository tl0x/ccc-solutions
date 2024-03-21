#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>
#include <map>
#include <cmath>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end()
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

int main() {
    optimize();

    int n; cin >> n; ll l; cin >> l; int s; cin >> s;
    int ans = 0;
    map<int, int> difference_map;

    for (int i = 0; i < n; i++) {
        int a, b, spookiness; cin >> a >> b >> spookiness;    
        difference_map[a] += spookiness;
        difference_map[b+1] -= spookiness;
    }

    int pv = 0, pk = 0; // start at 0 because thats the start of the houses
    for (auto &x: difference_map) {
        x.second += pv; 
        if (pv < s) {
            ans += x.first - pk; // add to answer if previous value still smaller then spookiness threshold
        }
        pv = x.second;
        pk = x.first;
    }

    if (abs(difference_map.end()->second) < s) {
        ans += l - pk;
    }

    cout << ans << endl;
}