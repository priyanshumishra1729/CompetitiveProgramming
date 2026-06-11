#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

// find the gcd of a and c 
// find the gcd of b and c

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b); 
}

// greedy approch -> can be applicable 
void solve() {
    int a, b, c; 
    cin >> a >> b >> c;
    while (a != b) {
        a = gcd(a, c); 
        b = gcd(b, c);
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