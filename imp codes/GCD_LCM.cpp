#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

int gcd (int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
    int n;
    cin >> n;
    vector<int> arr(n);
    int gc = arr[0];
    for (int i = 1; i < n; i++) {
        gc = gcd(gc, arr[i]);
    }
    cout << gc << '\n';
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