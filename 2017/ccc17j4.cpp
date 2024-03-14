// code by taylor.. with some code assistance from a friend
// basically add the valid numbers with brute force then add the remainders
// yes.. i did find all the amount of valid times by brute force on paper.

#include <iostream>
#include <set>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <cstring>
#include <queue>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

using ll = long long;
using vi = std::vector<int>;

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();
#define printl(x, size) for(int i=0; i<size; i++) cout << x[i] << endl;

int times[12] = {1, 6, 11, 15, 19, 22, 25, 27, 29, 30, 30, 31}; // holds the amount of valid times at the end of each hour, for a total of 31 over 12 hours.

int main() {
    optimize();

    int d; cin >> d;

    int ans = d / 720 * 31;
    d %= 720; // multiply the total amount of 12 hour intervals by 31 (because there are 31 valid per 12 hours)

    int n = d / 60;
    ans += times[n-1];
    d %= 60; // then add the remaining month values.

    vector<int> current_time_holder; current_time_holder.push_back(0); current_time_holder.push_back(0);
    if (n == 0) { // with this, check the remaining values that weren't included previously.
        n = 12;
    } 

    while (n) { // push the hour
        current_time_holder.push_back(n % 10); // push the hour digit(s) to positions 2 and 3
        n /= 10;
    }

    for (int i = 0; i <= d; i++) { // with the remaining d values, check if each incrementing minute is valid.
    // here, i represents the minute.
        current_time_holder[0] = i % 10;
        current_time_holder[1] = i / 10;

        bool valid = true;
        for (int j = 1; j < current_time_holder.size(); j++) { 
            if (current_time_holder[j] - current_time_holder[j-1] != current_time_holder[1] - current_time_holder[0]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            ans++;
        }
    }

    cout << ans << endl;
}