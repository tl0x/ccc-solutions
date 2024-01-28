// code by taylor
// time complexity: O(n)
// sort the tide heights then find the midpoint. then alternate printing tideHeights[middle-i] and tideHeights[middle+i]

#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define sortcut(x) x.begin(), x.end()

int main() {
    optimize();
	int n;
    cin >> n;
    vector<int> tideHeights(n);
    for(int i = 0; i < n; i++) {
        int height;
        cin >> height;
        tideHeights[i] = height;
    }
    sort(sortcut(tideHeights));

    int size = tideHeights.size();

	int middle = ((size+1)/2) - 1;
	cout << tideHeights[middle] << " ";
	for (int i = 1; i < (size+1)/2; i++) {
		cout << tideHeights[middle+i] <<  " " << tideHeights[middle-i] << " ";
	}
    if (size % 2 == 0) {
        cout << tideHeights.back();
    }
}