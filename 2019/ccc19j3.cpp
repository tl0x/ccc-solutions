// code by taylor
// string traversal. easier in python.

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

    int n; cin >> n;
    for (int _ = 0; _<n; _++) {
        string code; cin >> code;
        char current_char = code[0];
        int x = 0;
        
        for (int i = 0; i < code.length(); i++) {
            x++;
            if (code[i] != code[i+1]) {
                cout << x << " " << current_char << " ";
                current_char = code[i+1];
                x = 0;
            }
        }
        cout << "\n";
    }
}