#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back



void solve() {
    int q;
    cin >> q;
    queue<int> u;
    while (q--) {
        string s;
        cin >> s;
        int x;
        if (s == "add") {
            int x;
            cin >> x;
            u.push(x);            
        }
        else if (s == "remove") {
            if (!u.empty()) u.pop();
        }
        else if (s == "print") {
            if (!u.empty()) cout << u.front() << '\n';
            else cout << 0 << '\n';
        }
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