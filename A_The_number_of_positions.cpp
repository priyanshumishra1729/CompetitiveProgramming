#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    // if (a==0 && b==0) {
    //     cout<<n<<'\n';
    //     return;
    // }
    // if (a==b)  {
    //     cout<<n-1<<'\n';
    //     return;
    // }
    // else if (a==0 || b==0) {
    //     cout<<n-1<<'\n';
    //     return;
    // }
    // else {
    //     cout<<n-2<<'\n';
    //     return;
    // }
    // here the formula is used here 
    cout<<n-max(a,n-b-1)<<'\n';
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
 * unknown variable?
 * constraints?
 * translate statement?
 * combine inequalities?
 */