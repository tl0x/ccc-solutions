#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>


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

    string target, typed; cin >> target >> typed;
    unordered_map<char, bool> remove;

    string targetstage1 = "", typedstage1 = "";

    for (int i = 0; i < typed.size(); i++) {
        if (target[i] != typed[i]) {
            targetstage1 += target[i];
            typedstage1 += typed[i];
        }
    }

    for (int i = typed.size(); i < target.size(); i++) {
        targetstage1 += target[i];
    }

    cout << targetstage1 << " " << typedstage1 << endl;
}