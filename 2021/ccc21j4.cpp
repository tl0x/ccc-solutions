// code by taylor with approach from a friend - explanation below
// time complexity : O(n)
// bro wrote a whole essay 💀💀💀💀
// this question was harder than j5(s2) fr

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

unordered_map<char, int> count(string books) {
    unordered_map<char, int> ret;
    for (char c: books) {
        ret[c]++;
    }
    return ret;
}

int main() {
    // gameplan: count the amount of number of misplaced books of only large and medium

    /** 
     * EXPLANATION FOR OTHERS AND MYSELF
     * notice that we do not need to take into account where the small books are, 
     * as long as the large and medium are sorted correctly, 
     * it guarantees position of the small books will be correct too.
     * we can tell what should be the correct arrangement is 
     * just by calculating the frequency of each character
     * so we know what books should be in which position, therefore we can split the shelf 
     * into the "large", "middle" and "small" sections
     * a normal swap means a book will be moved to an incorrect section to a correct one.
     * but if a medium book is in the large section, and a large book is in a 
     * medium section, we can swap the two to essentially get double value out of 
     * the swap.  
    */

    optimize();
    
    string books; cin >> books;
    unordered_map<char, int> frequency = count(books);
    int ans = 0;

    int misplaced_large = 0;
    for (int i = 0; i < frequency['L']; i++) {
        if (books[i] != 'L') {
            misplaced_large++;
        }
    }

    int misplaced_medium = 0;
    for (int i = frequency['L']; i < frequency['L'] + frequency['M']; i++) {
        if (books[i] != 'M') {
            misplaced_medium++;
        }
    }

    int medium_in_large = 0;
    for (int i = 0; i < frequency['L']; i++) {
        if (books[i] == 'M') {
            medium_in_large++;
        }
    }

    int large_in_medium = 0;
    for (int i = frequency['L']; i < frequency['L'] + frequency['M']; i++) {
        if (books[i] == 'L') {
            large_in_medium++;
        }
    }

    /** 
     * Here, the min of (medium_in_large, large_in_medium) is the amount of efficient
     * swaps we can perform because having a medium book in the large section does not 
     * mean that we have a large book in medium, so we take the minimum of the two variables.
     * we can then subtract the amount of efficient swaps to the sum(misplaced_large, misplaced_medium) 
     * because the sum of the two already includes the swap, and we can subtract what swaps are saved
     * with the efficient swap(s).
    */  
    cout << misplaced_large + misplaced_medium - min(medium_in_large, large_in_medium) << endl;
}