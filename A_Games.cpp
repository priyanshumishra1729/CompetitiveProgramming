#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n;
    cin>>n;
    vector<int>h(n),w(n);
    unordered_map<int,int>mp;
    for (int i=0;i<n;i++) 
    {
        cin>>h[i]>>w[i];
        mp[w[i]]++;
    }
    int res=0;
    for (int i=0;i<n;i++)
    {
        res+=mp[h[i]];
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