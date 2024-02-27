// code by taylor
// easy string traversal problem

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

int main() {
    optimize()
    string s = "";
    cin >> s;

    for(int i = 0; i < s.size(); i++) {

        // print based on the operation given
        if(s[i] == '+') {
            cout << " tighten ";
        }
        else if(s[i] == '-') {
            cout << " loosen ";
        }

        // here so digits that are more than one digit places get printed correctly
        else if(isdigit(s[i])) {
            if(i != s.size() - 1) {

                // if next is still digit, print without newline
                if(isdigit(s[i+1])) {
                    cout << s[i];
                }
                // next char is not a digit so print newline for the next operation
                else {
                    cout << s[i] << endl;
                }
            }

            // if i == s.size(), just print. added to prevent indexoutofboundserror
            else {
                cout << s[i] << endl;
            }
        }

        // print the harp strings.
        else {
            cout << s[i];
        }
    }
}