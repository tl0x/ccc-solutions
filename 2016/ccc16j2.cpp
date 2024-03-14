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

    int square[4][4];
    bool flag = false;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> square[i][j];
        }
    }

    int sum = square[0][0] + square[0][1] + square[0][2] + square[0][3];
    for (int i = 0; i < 4; i++) {
        int temp = 0, temp2 = 0;
        for (int j = 0; j < 4; j++) {
            temp += square[i][j];
            temp2 += square[j][i];
        }
        if (temp != sum || temp2 != sum) {
            flag = true;
            break;
        }
    }

    if (flag) {
        cout << "not magic" << endl;
    }
    else {
        cout << "magic" << endl;
    }
}