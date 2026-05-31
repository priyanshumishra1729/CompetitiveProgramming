#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    vector <int> prices;
    for (int i = 0; i < prices.size(); i++) cin >> prices[i];
    int n = prices.size();
    int mn = prices[0], res = 0;
    for (int i = 0; i < n; i++) {
        mn = min(mn, prices[i]);
        res = max(res, prices[i] - mn);
    }
    cout << res << '\n';
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