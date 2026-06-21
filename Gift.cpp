#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> r(n + 1);
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        while (k--) {
            int x;
            cin >> x;
            r[x].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << r[i].size();

        for (int person : r[i]) {
            cout << ' ' << person;
        }
        cout << '\n';
    }
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