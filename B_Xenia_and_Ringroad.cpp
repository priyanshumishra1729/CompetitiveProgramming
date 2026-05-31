#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    i64 n, m; 
    cin>>n>>m;
    vector<i64> a(m);
    for (int i=0; i<m; i++) {
        cin>>a[i];
    }
    i64 cur=1, res=0;
    for (int i=0; i<m; i++) {
        i64 nxt=a[i];
        if (nxt>=cur) res+=(nxt-cur);
        else res+=(n-cur)+nxt;
        cur=nxt;
    }
    cout<<res<<'\n';
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