#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

int check (vector<int> a, int mid) {
    // for finding the peak 
    if (a[mid] > a[mid + 1]) return 1;
    else return 0;
}

void solve() {
    int n;
    cin>>n;
    vector<int>a(n+1);
    // pi+i=n+1
    int cnt=0;
    for (int i=1;i<=n;i++) cin>>a[i];
    for (int i=1;i<=n;i++) 
    {
        if (a[i]+i==n+1) cnt++;
    }
    cout<<cnt<<'\n';
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