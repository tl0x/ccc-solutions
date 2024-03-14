// code by taylor
// had to consult the editorial for this one, but turned out easier then i thought
// Time complexity O(L^2) where L is the number of plank lengths
// Basically a frequency pair counting question with a clever solution. Deeper explanation found below.

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

const int MAX_LENGTH = 2005; // given in problem description
int frequency[MAX_LENGTH+1];
int counts[2*MAX_LENGTH+1];

int main() {
    optimize();
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        int l; cin >> l;
        frequency[l]++;
    }

    for (int i = 0; i < MAX_LENGTH; i++) {
        for (int j = i; j < MAX_LENGTH; j++) {
            if (i == j) {
                // divide by 2 because we are making a pair of 2 identical length boards. 
                // ex: if there are 4 planks with length 40, we can make 2 boards of length 80 etc.
                counts[i+j] += frequency[i]/2;
            }
            else {
                counts[i+j] += min(frequency[i], frequency[j]); 
                // add the length that occurs less because we are guaranteed to be able to make x boards if x is the less occuring length.
            }
        }
    }

    int maximum = 0, amount = 0;
    for (int i = 0; i < MAX_LENGTH*2; i++) {
        int curr = counts[i]; // This represents the length (board count) of each possible fence height

        if (curr > maximum) {
            maximum = curr;
            amount = 1; // IF fence with higher length (Board count) is found, reset the count.
        }
        else if (curr == maximum){
            amount++; // increment if current board length is found.
        }
    } 

    cout << maximum << " " << amount << endl;
}