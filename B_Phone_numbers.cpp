#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using uint64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n; 
    string st; 
    cin >> st;
    if (n % 2 == 1) {
        for (int i = 0; i < n - 3; i += 2) {
            cout << st.substr(i, 2) << "-";
        }
        cout << st.substr(n - 3, 3); 
    }
    else {
        for (int i = 0; i < n; i += 2) {
            cout << st.substr(i, 2);
            if (i + 2 < n) {
                cout << "-";
            }
        }
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