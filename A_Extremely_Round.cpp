#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// 1 <= x <= n

// if single digit then cnt++   
// if greater than 1 size then just check if last digit is 0 then cnt++
// 42 -> 1 to 9 and 10 to 19 and 20 to 29 and 30 to 39 and 40 to 42
// 1 to 9 + 10 + 20 + 30 + 40 
// 111 = 111 / 10 = 10 * 11 = 110
// 111 - 110 = 1
// 11 

void solve() {
    int n; cin >> n;
    int cnt = 0;
    string s = to_string(n);
    int len = s.size();
    int p = 1;
    for (int i = 1; i < len; i++) p *= 10;
    int res = (len - 1) * 9 + n / p;
    cout << res << '\n';
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