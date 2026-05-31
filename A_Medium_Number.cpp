#include <bits/stdc++.h>
using namespace std;
#define int long long
int m = 1e9 + 7;

// int binpow(int a, int p, int m) {
//     if (p == 0) return 1;
//     if (p % 2 == 1) return (binpow(a, p - 1, m) * a) % m;
//     else {
//         int temp = binpow(a, p / 2, m);
//         return (temp * temp) % m;
//     }
// }

void Solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int mx = max({a, b, c});
    int mn = min({a, b, c});
    if (a != mx && a != mn) {
        cout << a << '\n';
    }
    else if (b != mx && b != mn) {
        cout << b << '\n';
    }
    else {
        cout << c << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/