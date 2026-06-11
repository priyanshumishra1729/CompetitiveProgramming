#include <bits/stdc++.h>

using namespace std;

#define int long long 
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

vector<int> l; 

void divisors (int n) {
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            l.push_back(i);
            if (n / i != i) l.push_back(n / i);
        }
    }
}

void solve() {
    int x;
    cin >> x;
    divisors(x);
    sort(l.begin(), l.end());
    for (auto ans : l) {
        cout << ans << '\n';
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

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */