#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back
const int m = 1e9 + 7;

int binpow(int a, int p, int m) {
    // base case 
    if (p == 0) return 1;
    if (p % 2) {
        return (binpow(a, p - 1, m) * a) % m;
    }
    else {
        int temp = binpow(a, p / 2, m); 
        return (temp * temp) % m; 
    }
} 

void solve() {
    int n; 
    cin >> n;
    if (n == 0) {
        cout << 1 << '\n';
        return;
    }
    int ans = n % 4;
    if (ans == 1) {
        cout << 8 << '\n';
    }
    else if (ans == 2) cout << 4 << '\n';
    else if (ans == 3) cout << 2 << '\n';
    else cout << 6 << '\n';
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