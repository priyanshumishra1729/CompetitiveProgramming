#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n; 
    vector<i64> a(n);
    bool check = true;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i + 2 < n; i++) {
        if (a[i] > a[i + 1] && a[i] >= a[i + 2]) {
            check = false;
        }
    }
    cout << (check ? "YES\n" : "NO\n");
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