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
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

int main() {
    optimize();
    string c; cin >> c;
    int l; cin >> l;
    string current_smallest = c.substr(0, l);

    for (int i = 0; i <= c.length()-l; i++) {
        if (current_smallest > c.substr(i, l)) {
            current_smallest = c.substr(i, l);
        }
    }

    cout << current_smallest << endl;
}