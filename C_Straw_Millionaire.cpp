#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n, m;
    cin >> n >> m;
    // graph reachability problem 
    vector <vector <int> > ad(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ad[a].push_back(b);
    }
    vector <int> vis(n + 1, 0);
    queue<int> qq;
    qq.push(1);
    vis[1] = 1;
    while (!qq.empty()) {
        int u = qq.front();
        qq.pop();
        for (int v : ad[u]) {
            if (!vis[v]) {
                vis[v] = 1;
                qq.push(v);
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (vis[i]) res++;
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