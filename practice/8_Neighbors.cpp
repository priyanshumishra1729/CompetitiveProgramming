#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int n, m;
    cin >> n >> m;
    char a[n + 1][m + 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // check if the point is in the corner 
            if (a[i][j] == '.') {
                for (int qq = 1; qq <= n; qq++) {
                    if (i == qq && j == 1) {
                        cout << "no\n";
                        return;
                    }
                }
                for (int pp = 1; pp <= n; pp++) {
                    if (i == pp && j == m) {
                        cout << "no\n";
                        return;
                    }
                }
            }
            // up
            if (a[x - 1][y] == 'x') found = true;     
            // left
            if (a[x][y - 1] == 'x') found = true;
            // right
            if (a[x][y + 1] == 'x') found = true;
            // down
            if (a[x + 1][y] == 'x') found = true;
            if (a[x - 1][j - 1] == 'x') found = true;
            if (a[x - 1][j + 1] == 'x') found = true;
            if (a[x + 1][j - 1] == 'x') found = true;
        }
    }
    if (found) cout << "yes\n";
    else cout << "no\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */


// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(nullptr);
//     int tt;
//     cin >> tt;
//     while (tt--) {
//         int n, m;
//         cin >> n >> m;
//         char mat[n][m];
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> mat[i][j];
//             }
//         }
//         int x, y;
//         cin >> x >> y;
//         x--;
//         y--;
//         int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
//         int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
//         bool a_x = true;
//         for (int k = 0; k < 8; k++) {
//             int nx = x + dx[k];
//             int ny = y + dy[k];
//             if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
//                 if (mat[nx][ny] != 'x') {
//                     a_x = false;
//                     break;
//                 }
//             }
//         }
//         if (a_x) cout << "yes\n";
//         else cout << "no\n";
//     }
//     return 0;
// }

// /*
//     Read problem - 5 mins
//         - Read a sample to make sure you understand the correct 
//         problem.

//     Solve - 20 mins
//         - Observe and think the topic form

//     Formulate - 1/2 mins
//         - Think how the code would look.
//         - Pass the TLE Check.

//     Coding - 15/20 mins
//         - implementation
    
//     Debug - 5 mins

//     Spend 20-40 mins in solving phase.
//     Before solving, don't see code at all.
//     After solving, see other's code.
// */