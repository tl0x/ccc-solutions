// code by taylor
// time complexity : O(n)
// just use a lot of if else statements, not much to it. Code here was written a while ago when i was new so it can obviously be written faster and more condensly.

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
    vector<string> flavours;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        flavours.push_back(temp);
    }

    int total = 0;
    for (string flavour : flavours) {
        if (flavour == "Poblano") {
            total += 1500;
        }
        else if (flavour == "Mirasol") {
            total += 6000;
        }
        else if (flavour == "Serrano") {
            total += 15500;
        }
        else if (flavour == "Cayenne") {
            total += 40000;
        }
        else if (flavour == "Thai") {
            total += 75000;
        }
        else if (flavour == "Habanero") {
            total += 125000;
        }
    }
    cout << total << endl;
}