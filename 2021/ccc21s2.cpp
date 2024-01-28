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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();


int main() {
    optimize();
    ll m, n, r;
    cin >> m >> n >> r;
    vector<ll> rows(m, 0);
    vector<ll> cols(n, 0);
    ll ans = 0;
    
    for (int _ = 0; _ < r; _++) {
        char instruction;
        int num;
        cin >> instruction >> num;

        num--;
        if (instruction == 'R') {
            rows[num]++;
        }
        if (instruction == 'C') {
            cols[num]++;
        }
    }

    for(int i = 0; i < m; i++) {
        for  (int j = 0; j < n; j++) {
            if ((rows[i] + cols[j]) % 2 == 1) {
                ans += 1;
            }
        }
    }

    cout << ans << endl;
}