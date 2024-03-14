// code by taylor
// if you can get somewhere with n charges, you can get there with n+2 just by wasting charges so just calculate the minimum amount
// of charges needed then check if number of charges is positive and even.

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
    int a, b, c, d; cin >> a >> b >> c >> d;
    int t; cin >> t;

    int distance = abs(a-c) + abs(b-d);
    t -= distance;

    if (t >= 0 && t % 2 == 0) {
        cout << "Y";
    }
    else {
        cout << "N";
    }
}