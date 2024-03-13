// code by taylor
// string manipulation. easier in python.

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

    int n; cin >> n;
    for (int _ = 0; _<n; _++) {
        int factor; char c; cin >> factor >> c;

        string temp = "";
        for (int i = 0; i < factor; i++) {
            temp += c;
        }
        cout << temp << endl;
    }
}