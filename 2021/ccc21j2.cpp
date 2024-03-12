// code by taylor
// value comparison, list iteration, implementation

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
    int N;
    cin >> N;

    int maxBid = -1;
    string winner;

    for (int i = 0; i < N; ++i) {
        string name;
        int currentBid;

        cin >> name >> currentBid; // get the name and current bid

        if (maxBid < currentBid) { // change max bid and name if the bid is higher than the current
            winner = name;
            maxBid = currentBid;
        }
    }

    cout << winner << endl;
}