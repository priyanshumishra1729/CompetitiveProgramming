#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    using push and pop in stack ds
    to check then put if (!st.empty()) {}
*/

void solve() {
    int q;
    cin >> q;
    stack<int> st;
    while (q--) {
        string s;
        int x;
        cin >> s;
        if (s == "add") {
            cin >> x;
            st.push(x);
        }
        else if (s == "remove") {
            if (!st.empty()) st.pop();
        }
        else if (s == "print") {
            if (!st.empty()) {
                cout << st.top() << '\n';
            } 
            else {
                cout << 0 << '\n';
            }
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