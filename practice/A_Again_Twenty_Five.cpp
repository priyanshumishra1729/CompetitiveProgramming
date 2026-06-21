#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

int binpow(int a, int p) {
    if (p == 0) return 1;
    if (p % 2 == 1) return (binpow(a, p - 1) * a);
    else {
        int temp = binpow(a, p / 2);
        return (temp * temp);
    }
}
 
void solve() {
    int num; 
    cin >> num; 
    cout << 25 << '\n';
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