#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;

const int mod = 1e9 + 7; 

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    ll prod = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        prod = (prod * a[i]) % mod; 
    }
    cout << prod << '\n';
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