#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int num;
    cin >> num;
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < num; i++) {
        int xx;
        cin >> xx;
        if (xx == 0) c0++;
        else if (xx == 1) c1++;
        else c2++;
    }
    int res = c0;
    int xx = min(c1, c2);
    res += xx;
    c1 -= xx;
    c2 -= xx;
    res += c1 / 3;
    res += c2 / 3;
    cout << res << '\n';
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