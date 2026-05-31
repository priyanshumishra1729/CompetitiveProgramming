#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    string s, t;
    cin >> s >> t;
    vector<char> st;
    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if (i == j) {
                st.push_back(s[i]);
                st.push_back(t[j]);
            }
            if (s.size() != t.size()) {
                st.push_back(t[j]);
            }
        }
    }
    for (auto it : st) {
        cout << it;
    }
    cout << '\n';    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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