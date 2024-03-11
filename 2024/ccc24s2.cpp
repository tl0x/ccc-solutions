// code by taylor
// time complexity: O(T * N)?
// use a map to quickly assign each character as heavy or light. the way i checked if it was alternating is probably not optimal.

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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();

string generate(string composition) {
    unordered_map<char, int> map;
    for (char c : composition) {
        map[c]++;
    }

    string temp = "";
    for (char c: composition) {
        if (map[c] > 1) {
            temp += '1';
        }
        else {
            temp += '0';
        }
    }

    return temp;
}

bool validate(string composite, int N) {
    string temp1 = "";
    string temp2 = "";

    for (int i = 0; i < N/2; i++) {
        temp1 += "01";
        temp2 += "10";
    }

    if (N % 2 == 1) {
        temp1 += "0";
        temp2 += "1";
    }

    if (composite == temp1 || composite == temp2) {
        return true;
    }
    return false;
}

int main() {
    optimize();

    int T, N; cin >> T >> N;
    for (int i = 0; i < T; i++) {
        string to_be_tested; cin >> to_be_tested;
        string composite = generate(to_be_tested);
        bool valid = validate(composite, N);

        if (valid) {
            cout << "T" << endl;
        }
        else {
            cout << "F" << endl;
        }
    }
}