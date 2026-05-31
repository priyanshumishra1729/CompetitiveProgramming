#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    vector<int> a(3);
    int cnt=0;
    int cnt1=0;
    for (int i=0; i<3; i++) {
        cin >> a[i];
        if (a[i] != 5) {
            cnt++;
        } 
        else 
            cnt1++;
    }
    if (cnt1 == 2 && cnt == 1) cout <<"YES\n";
    else cout <<"NO\n";
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