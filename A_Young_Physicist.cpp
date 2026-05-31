#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    i64 n;
    cin>>n;
    i64 sum1=0, sum2=0, sum3=0;
    for (i64 i=0; i<n; i++) {
        i64 x,y,z;
        cin>>x>>y>>z;
        sum1 += x; sum2+=y; sum3+=z;
    }
    if (sum1==0 && sum2==0 && sum3==0) cout<<"YES\n";
    else cout<<"NO\n";
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