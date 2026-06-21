#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<string> grid(8);
    for (int i = 0; i < 8; i++) cin >> grid[i];
    bool r = false;
    for (int i = 0; i < 8; i++) {
        bool check = true;
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] != 'R') {
                check = false;
                break;
            }
        }
        if (check) {
            r = true;
            break;
        }
    }
    cout << (r ? 'R' : 'B') << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}