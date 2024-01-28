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
