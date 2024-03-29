// code by taylor
// time complexity O(n)
// also known as ccc18j4.cpp :)
// the size of each neighbourhood can be calculated by averages the distances between the villages beside it.
// example: 2 5 9. The neighborhood of 5 is ((5-2)/2) + ((9-5)/2) = 1.5 + 2 = 3 units large
// go through each neighbourhood and find the minimum.

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

const int MAX = 5008;

int main() {
    int count; cin >> count;
    double smallest = 1e9;
    vector<int> villages(count);
    for (int i = 0; i < count; i++) {
        int location;
        cin >> location;
        villages[i] = location;
    }
    sort(villages.begin(), villages.end());

    for (int i = 1; i < count-1; i++) {
        double left = (abs(villages[i-1] - villages[i]))/2.0;
        double right = (abs(villages[i] - villages[i+1]))/2.0;
        
        smallest = min(smallest, left+right);
    }

    std::cout << fixed << setprecision(1) << smallest << endl;
}