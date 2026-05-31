#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int row[m];
        for (int j = 0; j < m; j++) {
            cin >> row[j];
        }
        for (int j = m - 1; j >= 0; j--) {
            cout << row[j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';
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