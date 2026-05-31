#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// lowercase letters
// there should be no digit that comes after a letter 
// digits non-decreasing order 
// letter non-decreasing order 
// for separating the digits and the characters

void solve() {
    int n;
    cin >> n; 
    string s; 
    cin >> s;
    string tt = s;
    sort(tt.begin(), tt.end());
    if (s == tt) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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