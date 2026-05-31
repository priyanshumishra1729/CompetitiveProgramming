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
    unordered_map <char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    
    string res = " ";
    int cnt = 0;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i] == t[j]) {
                res.push_back(s[i]);
                cnt++;
                if (cnt == m) {
                    cout << res << '\n';
                    return;
                }
            }
        }
    }
    cout << -1 << '\n';    
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