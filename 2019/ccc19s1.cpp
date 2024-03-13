// code by taylor
// time complexity: O(n)
// also known as ccc19j4.cpp :)
// notice that doing an permutation 2 times simply cancels the previous operation out (commutative). simply calculate the parity of the 2 operations.

#include <iostream>
#include <vector>

using namespace std;

const int MAX = 5008;

int main() {
    string flips;
    cin >> flips;

    int vert = 0, hort = 0;
    for (char& x: flips) {
        if (x == 'V') {
            vert += 1;
        }
        if (x == 'H') {
            hort += 1;
        }
    }

    if (vert % 2 == 0 && hort % 2 == 0) {
        std::cout << "1 2\n3 4" << endl;
    }
    else if (vert % 2 == 1 && hort % 2 == 1) {
        std::cout << "4 3\n2 1" << endl;
    }
    else if (vert % 2 == 0 && hort % 2 == 1) {
        std::cout << "3 4\n1 2" << endl;
    }
    else if (vert % 2 == 1 && hort % 2 == 0) {
        std::cout << "2 1\n4 3";
    }
}