// code by taylor
// power play! each successive sum is just a power of ten.

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>
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

    int n; int k; cin >> n >> k;
    int temp = n;
    for (int i = 1; i < k + 1; i++) {
        n += temp*pow(10,i);
    }
    cout << n << endl;
}