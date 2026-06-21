#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    string s;
    cin >> s;
    map<char, int> mp;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    // for (auto &ch : mp) {
    //     if (ch.second == 1) {
    //         cout << ch.first << '\n';
    //         break;
    //     } 
    //     else {
    //         cout << -1 << '\n';
    //     }
    // }
    for(char i = 'a'; i <= 'z'; i++) {
    if(mp[i] == 1) {
        cout << i << "\n";
        return;
    }
  }
  cout << "-1\n";
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