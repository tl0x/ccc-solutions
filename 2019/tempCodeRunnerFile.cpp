// code by taylor
// string manipulation. easier in python.

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
            if (current_char != code[i]) {
                cout << x << " " << current_char << " ";
                current_char = code[i];
                x = 1;
            }
            else if (i == code.length()-1) {
                cout << x+1 << " " << current_char << " ";
            }
            else {
                x++;
            }
        }
        cout << "\n";
    }
}