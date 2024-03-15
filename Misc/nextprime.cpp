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
#define sortcut(x) x.begin(), x.end();
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

bool is_prime(ll num) {
    if (num == 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }

    for (ll i = 2; i < pow(num, 0.5)+1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

ll fastMul(ll x, ll y, ll mod) {
    if (!y) return 0LL;
    return (x * (y & 1) + fastMul((x + x) % mod, y >> 1, mod)) % mod;
}

int main() {
    optimize();

    ll n; cin >> n;
    while (!is_prime(n)) {
        n++;
    }
    
    cout << n << '\n';
}