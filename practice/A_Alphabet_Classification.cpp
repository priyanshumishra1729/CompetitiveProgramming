#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n;
    cin>>n;
    unordered_map<char,int>mp;
    for (int i=0;i<n;i++) 
    {
        string s;
        cin>>s;
        mp[s[0]]++;
    }
    int mx=INT_MIN;
    for (auto it:mp)
    {
        mx=max(mx,it.second);
    }
    cout<<mx<<'\n';
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