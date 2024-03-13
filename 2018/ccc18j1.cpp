// code by taylor
// simple if else logic question.
// i swear i've done this question like 5 times by now

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

    int n1, n2, n3, n4; cin >> n1 >> n2 >> n3 >> n4;
    if ((n1 == 8 || n1 == 9) && (n2 == n3) && (n4 == 8 || n4 == 9)) {
        cout << "ignore" << endl;
        return 0;
    }
    cout << "answer" << endl;
}