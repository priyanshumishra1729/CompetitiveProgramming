#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

// void solve() {
//     string s;
//     cin >> s;
//     string res;
//     for (char ch : s) {
//         if (isdigit(ch)) {
//             res += ch;
//         }
//     }
//     cout << res;
// }

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    string res;
    for (int i = 0; i < n; i++) {
        if (isdigit(s[i])) res += s[i];
    }
    cout << res << '\n';
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