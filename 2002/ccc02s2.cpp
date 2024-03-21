// code by taylor
// would not even be considered a j4 by todays standards.
// would have passed it first try if it had an actual output specification.

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>
#include <cmath>
#include <numeric>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end()
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

int gcd(int a, int b) {
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main() {
    optimize();
    double top, bot; cin >> top >> bot;
    double fraction = top/bot;
    int n1 = top/bot;

    if (fraction == n1) { // if fraction makes solid number, just print.
        cout << n1 << endl;
        return 0;
    }
    else {
        int n2 = (int)top % (int)bot;
        int deno = (int)bot / gcd(n2, bot); // take the gcd of top and bottom to turn to simplified form
        int n3 = n2 / gcd(n2, bot);

        if (n1 == 0) {
            cout << n3 << "/" << deno << endl;
            return 0;
        }
        cout << n1 << " " << n3 << "/" << deno << endl;
    }
}