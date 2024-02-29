// code by taylor
// string traversal. stupidly easy for an s1. (have they become harder?)

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

int main() {
    optimize();
    int n; cin >> n;
    int tcount = 0, scount = 0;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string temp; getline(cin, temp);
        for (char letter : temp) {
            if (letter == 'T' || letter == 't') {
                tcount += 1;
            }
            if (letter == 'S' || letter == 's') {
                scount += 1;
            }
        }
    }

    if (tcount > scount) {
        cout << "English" << endl;
    }
    else if (scount >= tcount) {
        cout << "French" << endl;
    }
}