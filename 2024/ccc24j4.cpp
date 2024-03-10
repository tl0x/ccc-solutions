// code by taylor
// string traversal. Use the fact that silly key never gets hit after the quiet key. This means that we can simply traverse the two strings in a linear fashion.
// think about it; when travelling the two strings. they can either be identical, mismatched or 

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

    target += "."; typed += "."; // if unadded, the last character will not be made quiet if it occurs at the end of the string.

    char quiet = '-', silly1, silly2;

    int i = 0, j = 0; // pointers

    while (i < target.size() && j < typed.size()) {
        if (target[i] == typed[j]) {
            // skip if the two are identical
            i++; j++;
            continue;
        }

        if (target[i] == quiet) {
            // move the pointer for the first string by 1 to offset the quiet key
            i++;
        }

        else if (target[i+1] == typed[j]) {
            // move the pointer and set as quiet character if "disjunction" is found. Should be run once.
            quiet = target[i];
            i++;
        }

        else {
            // set the sillys if all other conditions fail.
            silly1 = target[i];
            silly2 = typed[j];
            i++;
            j++;
        }
    }

    cout << silly1 << " " << silly2 << endl << quiet << endl;
}