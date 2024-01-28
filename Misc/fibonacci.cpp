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

unordered_map<int, int> dp;

int fibonacci(int n) {
    if (dp.find(n) != dp.end()) {
        return dp[n];
    }
    if (n < 0) {
        return -1;
    }
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int result = fibonacci(n-1) + fibonacci(n-2);
    dp[n] = result;
    return result;
}


int main() {
    optimize();
    cout << fibonacci(20) << endl;
}