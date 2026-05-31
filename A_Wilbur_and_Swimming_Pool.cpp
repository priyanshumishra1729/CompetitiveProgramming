#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

set <int> xx, yy;

int val(set <int> &s) {
    return (*s.rbegin()) - (*s.begin());
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        xx.insert(x);
        yy.insert(y);
    }
    if (xx.size() != 2 || yy.size() != 2) {
        cout << -1 << '\n';
    }
    else {
        cout << val(xx) * val(yy) << '\n';
    }
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