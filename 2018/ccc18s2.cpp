#include <iostream>

using namespace std;

const int MAX = 5008;

vector<vector<int> > rotate90(vector<vector<int> > grid, int N) {
    vector<vector<int> > temp(N, vector<int>(N, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j<N; j++) {
            temp[j][N-1-i] = grid[i][j];
        }
    }
    return temp;
}

int main() {
    int N;
    cin >> N;

    vector<vector<int> > grid(N, vector<int>(N, 0));
    vector<int> heights;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j<N; j++) {
            int num;
            cin >> num;
            heights.push_back(num);
            grid[i][j] = num;
        }
    }
    sort(heights.begin(), heights.end());

    int smallest[N];
    for (int i; i < N; i++) {
        smallest[i] = heights[i];
    }

    vector<vector<int> > help = rotate90(grid, N);
    for (int i = 0; i < N; i++) {
        cout << smallest[i]; 
    }

}