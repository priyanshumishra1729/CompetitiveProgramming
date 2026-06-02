#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back



void solve() {
    int n; 
    cin >> n;
    // string st = to_string(n);
    // int sz = st.size();
    // int rem = 4 - sz;
    // string res = " ";
    // for (int i = 0; i < sz; i++) {
    //     res.push_back(st[i]);
    // }

    // for (int i = 0; i < rem; i++) {
    //     res.push_back(0);
    // }
    // cout << res << '\n';
    cout << setw(4) << setfill('0') << n << '\n';
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