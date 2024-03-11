// code by taylor
// Time complexity : unsure. probably O(1)
// it was more convenient to convert the year to a string, but you can do it using actual math

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <set>
#include <vector>

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

    int y; cin >> y;

    while (true) {
        y += 1;
        string stryear = to_string(y);
        set<char> digits;

        for (char digit: stryear) {
            digits.insert(digit);
        }

        if (digits.size() == stryear.length()) {
            cout << y << endl;
            break;
        }
    }
    
}