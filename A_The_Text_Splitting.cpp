#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// n = p + q
// if not then -1 
// it fails when n < max(p, q)
// using the idea of substring
// but after printing the substr from 0 to p
// we print the substr from i = p + 1 to i = n 
// i think its good way to do it -> not a good idea 
// i should use a brute force approach 
// first printing the chars from 0 to p 
// then printing the chars from p to q
// using the basic implem

void solve() {
    int n, p, q;
    cin >> n >> p >> q;
    string s; 
    cin >> s;
    // fails
    int mx = max(p, q); 
    if (n < mx) {
        cout << -1 << '\n';
        return;
    }
    while (p--) {
        cout << s << '\n';
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