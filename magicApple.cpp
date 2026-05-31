#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() { 
    int n = 10; 
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    int sum = 0, mn = INT_MAX;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (max(sum, 100)) {
            
        }
    }
    cout << ans << '\n';
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