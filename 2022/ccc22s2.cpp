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

#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007;
#define sortcut(x) x.begin(), x.end();


bool exists(vector<string>& names, string& name) {
    for (string &i: names) {
        if (i == name) {
            return true;
        }
    }
    return false;
}

int main() {
    optimize();
    unordered_map<string, string> friends;
    unordered_map<string, string> enemies;

    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        string friend1, friend2;
        cin >> friend1 >> friend2;
        friends[friend1] = friend2;
        friends[friend2] = friend1;
    }

    int y;
    cin >> y;
    for (int i = 0; i < y; i++) {
        string enemy1, enemy2;
        cin >> enemy1 >> enemy2;
        enemies[enemy1] = enemy2;
        enemies[enemy2] = enemy1;
    }

    int g;
    cin >> g;
    int ans = 0;
    for (int i = 0; i < g; i++) {
        vector<string> group(3);
        cin >> group[0] >> group[1] >> group[2];
        
        for (int b = 0; b < 3; b++) {
            if (friends.find(group[b]) != friends.end()) {
                string f1 = group[b];
                string f2 = friends[f1];

                if (!(exists(group, f1)) || !(exists(group, f2))) {
                    ans += 1;
                }
            }

            if (enemies.find(group[b]) != enemies.end()) {
                string e1 = group[b];
                string e2 = enemies[e1];

                if (exists(group, e1) && exists(group, e2)) {
                    ans += 2;
                }
            }
        }
    }
    cout << ans/2 << endl;
}