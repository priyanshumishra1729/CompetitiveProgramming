#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    current policy is xp, yp
    and voter policy is xv, yv 
*/  

void solve() {
    int xp, yp, xv, yv;
    cin >> xp >> yp >> xv >> yv; 
    ll v1 = (1LL) * (xp - xv) * (1LL) * (xp - xv);
    ll v2 = (1LL) * (yp - yv) * (1LL) *(yp - yv);
    cout << (ll)v1 + v2 << '\n';
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