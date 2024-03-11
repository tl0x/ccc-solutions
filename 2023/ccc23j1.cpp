// code by taylor
// time complexity: O(1)
// arithmetic. typical for a j1.

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
    int p, c; cin >> p >> c;
  
    bool bonus = false;
    if (p > c) {
        bonus = true;
    }

    int points = p*50 - c*10;
    if (bonus) {
        points += 500;
    }

    cout << points; 
}