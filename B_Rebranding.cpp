#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n, m; 
    cin >> n >> m;
    string s;
    cin >> s;
    // int sz = s.size();

    // O(m * n)
    // for (int i = 0; i < m; i++) {
    //     char x, y;
    //     cin >> x >> y;
    //     for (int i = 0; i < sz; i++) {
    //         if (s[i] == x) s[i] = y;
    //         else if (s[i] == y) s[i] = x;
    //     }
    // }
    // cout << s << '\n';

    // using mapping O(m + n)
    vector <char> mpp(26);
    for (int i = 0; i < 26; i++) {
        mpp[i] = 'a' + i;
    }
    while (m--) {
        char x, y; 
        cin >> x >> y;
        for (int i = 0; i < 26; i++) {
            if (mpp[i] == x) mpp[i] = y;
            else if (mpp[i] == y) mpp[i] = x;
        }
    }
    for (auto ch : s) {
        cout << mpp[ch - 'a'];
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