// code by taylor
// monkey brute force method
// small input means we can just do this

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

int main() {
    optimize();
    int c[4]; cin >> c[0] >> c[1] >> c[2] >> c[3];

    int n1 = c[0]; int n2 = c[1] + c[0]; int n3 = c[2] + c[1] + c[0]; int n4 = c[3] + c[2] + c[1] + c[0];
    
    cout << "0 " << n1 << " " << n2 << " " << n3 << " " << n4;
    cout << endl;

    cout << n1 << " " << "0" << " " << abs(n1-n2) << " " << abs(n1-n3) << " " << abs(n1-n4); 
    cout << endl;

    cout << n2 << " " << abs(n2-n1) << " " << "0" << " " << abs(n2-n3) << " " << abs(n2-n4);
    cout << endl;

    cout << n3 << " " << abs(n3-n1) << " " << abs(n3-n2) << " " << "0" << " " << abs(n3-n4); 
    cout << endl;

    cout << n4 << " " << abs(n4-n1) << " " <<abs(n4-n2) << " " << abs(n4-n3) << " " << "0"; 

}