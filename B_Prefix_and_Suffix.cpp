#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n, m; 
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool pref = true, suf = true;

    // check for suf
    for (int i = 0; i < n; i++) {
        if (t[i] != s[i]) pref = false;
    }

    // check for pref 
    for (int i = m - n; i < m; i++) {
        if (s[i] != t[m - n + i]) suf = false;
    }

    if (pref) {
        cout << (suf ? 0 : 1) << endl;
    } else {
        cout << (suf ? 2 : 3) << endl;
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