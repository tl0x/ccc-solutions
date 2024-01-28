// code by taylor
// time complexity: O(N/4)
// check if they are a multiple of 4 or 5 then start a for loop. Continously subtract 4 from N and check if it is divisble by 5 each time. This represents
// a unique 4 and 5 combination.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, temp;
    cin >> N;

    int ans = 0;
    temp = N;

    if (N % 4 == 0 && N % 5 == 0) {
         ans += 1;
    }
    if (N % 4 == 0 || N % 5 == 0) {
        ans += 1;
    }

    for (int i = 0; i < (N/4)-1; i++) {
        temp -= 4;
        if ((temp) % 5 == 0) {
            ans += 1;
        }
    }
    cout << ans << endl;
}
