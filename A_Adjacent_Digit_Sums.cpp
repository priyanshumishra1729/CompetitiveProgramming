#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9;
using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int x, y; 
    cin >> x >> y;
    int val = (x + 1 - y);
    if (val % 9 == 0 && x + 1 >= y) cout << "Yes\n";
    else cout << "No\n";
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