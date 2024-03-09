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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

int main() {
    optimize();

    int N; cin >> N;
    int hats[N];
    for (int i = 0; i < N; i++) {
        cin >> hats[i];
    }

    int displacement = N/2;
    int ans = 0;
    for (int i = 0; i < N/2; i++) {
        if (hats[i] == hats[i+displacement]) {
            ans += 1;
        }
    }

    cout << ans*2 << endl;
}