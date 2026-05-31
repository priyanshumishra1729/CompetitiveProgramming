#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n;
    cin >> n;
    vector<i64> a(n), b(n);
    for (auto &xx : a) cin >> xx;
    for (auto &xx : b) cin >> xx;
    i64 mA = *min_element(a.begin(), a.end());
    i64 mB = *min_element(b.begin(), b.end());
    i64 m = 0;
    for (int i = 0; i < n; i++) {
        m += max(a[i] - mA, b[i] - mB);
    }
    cout << m << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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