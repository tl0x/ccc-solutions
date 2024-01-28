// code is not mine.

#include <iostream>
using namespace std;


int costs[5008][5008];
int heights[5008];
int n;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    for (int i=1; i<=n; i++) cin >> heights[i];

    for (int i=1; i<=n; i++) {
        int l = 1, r = i, best = INT_MAX;
        while (r <= n) {
            costs[l][r] = abs(heights[l] - heights[r]) + costs[l+1][r-1];
            best = min(best, costs[l][r]);
            l++; r++;
        }
        cout << best << " ";
    }
    cout << endl;
}