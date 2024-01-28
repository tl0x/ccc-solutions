// code by taylor
// repurposed from geeksforgeeks.

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

int tenerySearch(vector<int> numbers, int value) {
    int left = 0, right = numbers.size()-1;
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (numbers[mid1] == value) {
            return mid1;
        }
        else if (numbers[mid2] = value) {
            return mid2;
        }
        
        if (value < numbers[mid1]) {
            right = mid1-1;
        }
        else if (value > numbers[mid2]) {
            left = mid2 + 1;
        }
        else {
            right = mid1+1;
            left = mid2-1;
        }
    }
    return -1;
}

int main() {
    optimize();
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[n];
    }

    cout << tenerySearch(numbers, 8);
}