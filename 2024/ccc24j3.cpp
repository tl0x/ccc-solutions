// code by taylor
// time complexity: O(n)
// determine the target score and then count the amount that matches

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

bool compare(int a, int b) {
    return a > b;
}

int main() {
    optimize();
    int n; cin >> n;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    sort(scores, scores+n, compare);

    vector<int> unique;
    unique.push_back(scores[0]);
    for (int i = 1; i < n; i++) {
        if (scores[i-1] != scores[i]) {
            unique.push_back(scores[i]);
        }
    }
    
    int score = unique[2];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] == score) {
            ans++;
        }
    }

    cout << score << " " << ans << endl;
}