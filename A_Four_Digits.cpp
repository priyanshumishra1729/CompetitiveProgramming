#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << "0" << "0" << "0" << s << '\n';
    }
    else if (s.size() == 2) {
        cout << "0" << "0" << s << '\n';
    }
    else if (s.size() == 3) {
        cout << "0" << s << '\n';
    }   
    else {
        cout << s << '\n';
    }
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