// code by taylor
// fiendishly easy question for a j4. Hardest part was working with cpp strings. 
// probably easier just to do in python

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

    // gameplan: loop through each cyclic shift and check if in string. If one is found, breakout and print the answer.
    // Because the strings are relatively short, we can just loop through all of them. Notice that a string with length s will have s cyclic shifts.
    bool found = false;
    string t; string s; cin >> t >> s;
    for (int i = 0; i < s.length(); i++) {
        if (t.find(s) != string::npos) {
            found = true;
            cout << "yes";
            break;
        }
        char temp = s.back();
        s.pop_back();
        s.insert(0, 1, temp);
    }

    if (!found) {
        cout << "no";
    }
}