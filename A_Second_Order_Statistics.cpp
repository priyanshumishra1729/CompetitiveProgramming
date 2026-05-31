#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n;
    cin >> n;
    vector <int> a(n);
    for (auto &x : a) {
        cin >> x;
    }
    sort(a.begin(), a.end());
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) mn = min(mn, a[i]);
    for (int i = 1; i < n; i++) {
        if (a[i] != mn) {
            cout << a[i] << '\n';
            return;
        }
    }
    cout << "NO\n";
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