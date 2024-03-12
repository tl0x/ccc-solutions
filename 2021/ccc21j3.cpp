// code by taylor
// Time complexity O(n) where n is the number of inputs
// make sure to review those modulo expressions! The only real challenge is splitting up the inputs
// of course if you are using a language like python using strings may be favourable.

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

    int current_value = -1;
    string previous_instruction = "";
    while (current_value != 99999) {
        cin >> current_value;

        if (current_value == 99999) {
            break;
        }
        int num1 = current_value / 1000; // this works because cpp impliclity converts the type, so its rounded down immediately
        int num2 = current_value % 1000;

        int sum = (num1%10) + (num1/10); // similarly here.

        if (num1 == 0) {
            cout << previous_instruction + " ";
        }
        else if (sum % 2 == 1) {
            cout << "left ";
            previous_instruction = "left";
        }
        else if (sum % 2 == 0) {
            cout << "right ";
            previous_instruction = "right";
        }

        cout << num2 << endl; // print number of steps
    }

}