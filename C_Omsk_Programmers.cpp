#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

const int inf = 1e9;

// a or b add 1
// a or b and divide it by x 
// a + 1 or b + 1 
// 

void solve() {
    ll a, b, x; cin >> a >> b >> x;
    if(a > b) swap(a, b);
    ll res = b - a;
    ll curr = 0;
    while(a != b) {
        b /= x; curr++;
        res = min(res, curr + abs(b - a));
        if(a > b) swap(a, b);
    }
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