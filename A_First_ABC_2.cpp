#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    // for (int i = 0; i < n; i++) {
    //     if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') {
    //         cout << i + 1 << '\n';
    //         return;
    //     }
    // }    
    // cout << -1 << '\n';
    
    // using the substr idea 
    // it works ... 
    for (int i = 0; i < n; i++) {
        if (s.substr(i, 3) == "ABC") {
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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