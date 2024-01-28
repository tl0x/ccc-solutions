// code by taylor
// simple math. make sure to use iomanip to avoid AC.

#include <iostream>
#include <utility>
#include <algorithm>
#include <iomanip>
using namespace std;

pair<double, double> A[100002];
double res = -9999;

int main(){


    int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
        cin >> A[i].first >> A[i].second;
    }

	sort(A, A+n);

	for(int i = 1; i < n; i++){
		res = max(res, abs(A[i].second- A[i-1].second)/(A[i].first - A[i-1].first));
	}

	cout << fixed << setprecision(10) << res;
	return 0;
}