#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int x;
    cin >> x;
    if (x<1200) cout << "ABC\n";
    else cout << "ARC\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
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