#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int num;
    cin >> num;
    vector<int> y(num + 1);
    for (int i = 0; i < num; i++) {
        int xx, yy;
        cin >> xx >> yy;
        y[xx] = yy;
    }
    int res = 0;
    int mn = INT_MAX;
    for (int x = 1; x <= num; x++) {
        if (y[x] < mn) {
            res++;
            mn = y[x];
        }
    }
    cout << res << '\n';
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