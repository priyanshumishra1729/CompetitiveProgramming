#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n;
    cin>>n;
    if (n==0) 
    {
        cout<<0<<'\n';
        return;
    }
    else if (n==1) 
    {
        cout<<0<<'\n';
        return;
    }
    else if (n==2) 
    {
        cout<<0<<'\n';
        return;
    }
    if (n%2==0) 
    {
        int ans=n/2;
        cout<<ans-1<<'\n';
    }
    if (n%2!=0) 
    {
        cout<<n/2<<'\n';
    }
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