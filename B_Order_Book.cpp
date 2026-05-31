#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// for S, if p is same then, add both q
// first, find out the max p value in the order book 
// then see the 2nd highest value in the given above d char 
// then count the occurence of b while it is not equal to s

void solve() {
    int n, s; 
    cin >> n >> s;
    vector <char> d(n);
    vector <int> p(n), q(n); 
    for (int i = 0; i < n; i++) {
        cin >> d[i] >> p[i] >> q[i];
    }
    int mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        mx = max(mx, p[i]);
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