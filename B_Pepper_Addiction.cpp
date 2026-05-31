#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> c(m+1);
    for(int i = 1; i <= m; i++)
        cin >> c[i];
    vector<long long> sumB(m+1, 0);
    for(int i = 0; i < n; i++) {
        ll a;
        ll b;
        cin >> a >> b;
        sumB[a] += b;
    }
    ll res = 0;
    for(int j = 1; j <= m; j++)
        res += min(c[j], sumB[j]);
    cout << res << "\n";
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