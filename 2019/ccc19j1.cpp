// code by taylor
// arithmetic

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

    int a1,a2,a3;
    int b1,b2,b3;

    cin >> a3 >> a2 >> a1 >> b3 >> b2 >> b1;

    if (a3*3 + a2*2 + a1 > b3*3 + b2*2 + b1) {
        cout << "A";
    } 
    else if (a3*3 + a2*2 + a1 == b3*3 + b2*2 + b1) {
        cout << "T";
    }
    else {
        cout << "B";
    }
}