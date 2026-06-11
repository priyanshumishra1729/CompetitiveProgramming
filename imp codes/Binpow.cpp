#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back
const int m = 1e9 + 7;

// here, a is base, p is exponent and m is mod 
int binpow(int a, int p, int m) {
    // base case, if p = 0 means if exponent is 0 in any case 
    if (p == 0) return 1;
    // for odd exponent  
    if (p % 2) {
        return (binpow(a, p - 1, m) * a) % m;
    }
    // if exponent is even 
    else {
        int temp = binpow(a, p / 2, m) % m;
        return (temp * temp) % m;
    }
}

void solve() {
    cout << binpow(2, 2, m) << '\n';
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