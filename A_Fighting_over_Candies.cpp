#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
   int a, b, c;
   cin >> a >> b >> c;
   if (a == (b + c)) cout << "Yes\n";
   else if (b == (a + c)) cout << "Yes\n";
   else if (c == (b + a)) cout << "Yes\n";
   else cout << "No\n"; 
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