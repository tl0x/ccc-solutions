// code by taylor
// prefix sum type approach. could easily be reworked if the input was larger, and to solve more general cases.

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>

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
    int c[4]; cin >> c[0] >> c[1] >> c[2] >> c[3];
    int distances[5][5];

    int n1 = c[0]; int n2 = c[1] + c[0]; int n3 = c[2] + c[1] + c[0]; int n4 = c[3] + c[2] + c[1] + c[0];
    int combos[5] = {0, n1, n2, n3, n4};

    memset(distances, 0, sizeof(distances));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            distances[i][j] = abs(combos[i] - combos[j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << distances[i][j] << " ";
        }
        cout << endl;
    }
}