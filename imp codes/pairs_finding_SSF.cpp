#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;

int freq[100100];

int nC2(int n) {
    return n * (n - 1) / 2;
}

void solve() {
    // Problem: Find the no of pairs (i, j) such that a[i] == a[j], i < j
    // constraints: n <= 10^5   a[i] <= 10^5

    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i = 1; i <= 100000; i++) ans += nC2(freq[i]);
    cout << ans << '\n';

    // To clear the global array for the next test case 
    for (int i = 0; i < n; i++) {
        freq[a[i]] = 0;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */