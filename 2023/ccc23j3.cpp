// code by taylor
// time complexity : O(n)
// the code to make the output comma seperated is jank but overall easy question. Loop through columns of the schedules.
// needlessly long for the sake of readability

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
    int schedule[n][5];
    int attending[5];
    vector<int> valid_days;

    for (int i = 0; i < n; i++) {
        string temp; cin >> temp;
        for (int j = 0; j < 5; j++) {
            if (temp[j] == 'Y') {
                schedule[i][j] = 1;
            }
            else {
                schedule[i][j] = 0;
            }
        } 
    }

    int maximum = 0;
    for (int j = 0; j < 5; j++) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            temp += schedule[i][j];
        }
        maximum = max(temp, maximum);
        attending[j] = temp; // record how many people can go that day
    }

    // this cannot be the best way to do this lol
    for (int i = 0; i < 5; i++) {
        if (attending[i] == maximum) {
            valid_days.push_back(i+1); // do i really need this for comma seperated output?
        }
    }

    cout << valid_days[0];
    for (int i = 1; i < valid_days.size(); ++i) {
        cout << "," << valid_days[i];
    }
    cout << "\n";
}