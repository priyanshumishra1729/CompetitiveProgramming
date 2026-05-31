#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;


void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int l, r;
    while (q--) {
        string type; 
        cin >> type;
        if (type == "pop_back") s.pop_back();
        else if (type == "front") cout << s.front() << '\n';
        else if (type == "back") cout << s.back() << '\n';
        else if (type == "sort") {
            cin >> l >> r;
            if (l > r) swap(l, r);
            sort(s.begin() + l - 1, s.begin() + r);
        }
        else if (type == "reverse") {
            cin >> l >> r;
            if (l > r) swap(l, r);
            reverse(s.begin() + l - 1, s.begin() + r);
        }
        else if (type == "print") {
            int p;
            cin >> p;
            cout << s[p - 1] << '\n';
        }
        else if (type == "substr") {
            cin >> l >> r;
            if (l > r) {
                swap(l, r);
            }
            string substr = s.substr(l - 1, r - l + 1);
            cout << substr << '\n';
        }
        else {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
    }
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








 