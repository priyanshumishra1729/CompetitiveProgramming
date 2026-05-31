#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int n;
    cin >> n;
    int a[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) a[i] = mx;
        else if (a[i] == mx) a[i] = mn;
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
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