#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// cost a dollars -> give access to 1 stud
// cost b dollars -> group of upto 3 students 
// n a b 
// 5 10 25 
// 5 / 3 => 1 =  25 
// 5 % 3 = 2 = 2 * 10 
// 20 + 25 = 45 

void solve() {
    i64 n, a, b;
    cin >> n >> a >> b;
    i64 pr = n / 3;
    i64 rem = n % 3;
    i64 res = pr * min(3 * a, b) + min(rem * a, b);
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