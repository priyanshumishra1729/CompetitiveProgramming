#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    vector <int> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &y : b) cin >> y;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] < b[i] || a[j] == b[i]) cnt++;
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */