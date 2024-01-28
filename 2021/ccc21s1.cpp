#include <iostream>
#include <vector>
using namespace std;

double calculateTrapezoid(double w1, double w2, double h) {
    double area = ((w1+w2)/2)*h;

    return area;
}

int main() {
    int N;
    cin >> N;
    double area = 0;

    
    vector<double> heights(N+1);
    vector<double> widths(N);
    for (int i = 0; i < N+1; i++) {
        cin >> heights[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> widths[i];
    }

    for (int i = 0; i < N; i++) {
        area += calculateTrapezoid(heights[i], heights[i+1], widths[i]);
    }

    cout << fixed << area << endl;
}