#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    double x; 
    cin >> x;
    string s = to_string(x);
    int n = s.size();
    int id = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            id = i;
            cout << i << '\n';
        }
    }
    int ans = (int)x;
    if (s[id + 1] >= 5) {
        cout << ans + 1 << '\n';
    }
    else if (s[id + 1] == 0 and s[0] == 0){
        cout << 0 << '\n';
    }
    else {
        cout << ans << '\n';
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