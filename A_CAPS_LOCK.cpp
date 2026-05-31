#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;

// all letters should be upper
// except one letter, all should be upper
// change if it satifies else unchanged

void solve() {
    string s; 
    cin>>s;
    int n=s.size();
    bool allCheck=true, remCheck=true;
    for (char ch:s) {
        if (!isupper(ch)) {
            allCheck=false;
        }
    }
    if (islower(s[0])) {
        for (int i=1; i<n; i++) {
            if (!isupper(s[i])) {
                remCheck=false;
            }
        }
    }
    else remCheck=false;
    if (allCheck || remCheck) {
        for (char &c:s) {
            if (islower(c)) {
                c=toupper(c);
            }
            else c=tolower(c);
        }
    }
    cout<<s<<'\n';  
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