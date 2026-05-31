#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> p(n + 1, 0);
    vector<int> suf(n + 1, 0);
    for (int i = 0; i < n; i++) {
        p[i + 1] = p[i] + (s[i] == '2');
    }
    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i + 1] + (s[i] == '1' || s[i] == '3');
    }
    int b = 0;
    for (int i = 0; i <= n; i++) {
        b = max(b, p[i] + suf[i]);
    }
    cout << n - b << '\n';
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