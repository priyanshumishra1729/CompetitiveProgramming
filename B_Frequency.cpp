#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    string s;
    cin >> s;
    map<char, int> mp;
    for (char &ch : s) {
        mp[ch]++;
    }
    int mx = INT_MIN;
    char ans;
    for (auto it : mp) {
        if (it.second > mx) {
            mx = it.second;
            ans = it.first;
        } 
    }
    cout << ans << '\n';
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