#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n; 
    vector <int> a(n);
    int ans = 0, odd = 0, even = 0; 
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) {
            odd++;
        }
        else {
            even++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (odd > 1) {
            if (a[i] % 2 == 0) {
                ans = i;
                cout << ans + 1 << '\n';
                return;
            } 
        }
        else {
            if (a[i] & 1) {
                ans = i;
                cout << ans + 1 << '\n';
                return;
            } 
        }
    }
    cout << -1 << '\n';
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