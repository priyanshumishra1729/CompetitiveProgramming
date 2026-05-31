#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// x pass p levels
// y pass q levels
// 

void solve() {
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int>st;
    for (int i=0; i<p; i++) {
        int x;
        cin>>x;
        st.insert(x);
    }
    int q;
    cin>>q;
    for (int i=0; i<q; i++) {
        int y;
        cin>>y;
        st.insert(y);
    }
    if (st.size()==n) cout<<"I become the guy.\n";
    else cout<<"Oh, my keyboard!\n";
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