// code by taylor
// time complexity: O(t * sqrt(n))
// calculate for the prime*2. check if both i and (prime*b)-i are both prime. if they are, print them.

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = 5008;

bool isPrime(int num) {
    if (num == 0 || num == 1 || num % 2 == 0) {
        return false;
    }

    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int prime;
        cin >> prime;
        int value = prime*2;

        for (int b = 3; b <= value / 2; b += 2)
        {
            if (!isPrime(b) || !isPrime(value - b)) {
                continue;
            }
            cout << b << ' ' << value - b << '\n';
            break;
        }
    }
}