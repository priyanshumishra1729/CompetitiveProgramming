#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back
const int mod = 1e9 + 7;

/*
    1 <= k <= n - 1

*/

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) r++;
    }
    for (int k = 1; k < n; k++) {
        if (a[k - 1] == 2) {
            l++;
            r--;
        }
        if (l == r) {
            cout << k << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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