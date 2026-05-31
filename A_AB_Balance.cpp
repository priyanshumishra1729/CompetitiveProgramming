#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int c1 = 0, c2 = 0;
    // cnt of ab and ba substring occurence 
    for (int i = 0; i < n; i++) {
        string sub = s.substr(i, 2);
        if (sub == "ab") c1++;
        else if (sub == "ba") c2++;
    }
    if (c1 == c2) cout << s << '\n';
    else if (c1 > c2) {
        s[0] = 'b';
        cout << s << '\n';
    }
    else {
        s[0] = 'a';
        cout << s << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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