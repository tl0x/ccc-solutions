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

int min_ignore(int a, int b) {
    if (a == -1) {
        return b;
    }
    else if (b == -1) {
        return a;
    }
    else {
        return min(a,b);
    }
}

int combinations(int total, vector<int> coins) {
    if (dp.find(total) != dp.end()) {
        return dp[total];
    }

    if (total == 0) {
        return 0;
    }
    else {
        int answer = -1;
        for (int coin: coins) {
            int subproblem = total-coin;
            if (subproblem < 0) {
                continue;
            }
            
            int calc = combinations(subproblem, coins);

            if (calc != -1) {
                answer = min_ignore(answer, calc + 1);
            }
        }
        dp[total] = answer;
        return answer;
    }
}

int main() {
    optimize();
    int n = 150;
    vector<int> coins;
    coins.push_back(1);
    coins.push_back(3);
    coins.push_back(5);

    cout << combinations(n, coins) << endl;
}