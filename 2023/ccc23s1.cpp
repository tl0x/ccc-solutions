#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> row1(N);
  vector<int> row2(N);
  for (int i = 0; i < N; i++) {
    cin >> row1[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> row2[i];
  }

  int total = 0;
  for (int i = 0; i < N; i++) {
    if (row1[i] == 1) {
      total += 3;
    }
  }
  for (int i = 0; i < N; i++) {
    if (row2[i] == 1) {
      total += 3;
    }
  }

  for (int i = 0; i < N-1; i++) {
    if (row1[i] == 1 && row1[i+1] == 1) {
      total -= 2;
    }
    if (row2[i] == 1 && row2[i+1] == 1) {
      total -= 2;
    }
  }

  for (int i = 0; i < N; i++) {
    if (row1[i] == 1 && row2[i] == 1 && i % 2 == 0) {
      total -= 2;
    }
  }

  cout << total << endl;
}