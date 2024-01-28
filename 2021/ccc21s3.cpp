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
#define nn \n;

ll timefunction(vector<int> positions, vector<int> speeds, vector<int> ranges, int location) {
    ll time = 0;
    for(int i = 0; i < positions.size(); i++) {
        int rangeLeft = positions[i] - ranges[i];
        int rangeRight = positions[i] + ranges[i];

        if (rangeLeft <= location && rangeRight >= location) {
            continue;
        }
        int temp = max(rangeLeft, min(location, rangeRight));

        time += (long long)speeds[i] * abs(location-temp);
    }
    return time;
}

int main() {
    optimize();
    int n;
    cin >> n;
    vector<int> positions(n), speeds(n), ranges(n);

    int left = 1e9;
    int right = 0;

    for (int i = 0; i < n; i++) {
        cin >> positions[i] >> speeds[i] >> ranges[i];
        left = min(left, positions[i]);
        right = max(right, positions[i]);
    }

    ll answer = 1e18;
    for (int i = 0; i < 60; i++) {
        int offset = (right - left)/3;
        int mid1 = left + offset;
        int mid2 = right - offset;

        ll result1 = timefunction(positions, speeds, ranges, mid1);
        ll result2 = timefunction(positions, speeds, ranges, mid2);
        
        answer = min(answer, result1);
        answer = min(answer, result2);

        if (result1 > result2) {
            left = mid1;
        }
        if (result2 > result1) {
            right = mid2;
        }
    }

    cout << answer << "\n";
}