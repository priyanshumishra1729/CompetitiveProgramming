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
    int n;
    cin >> n;
    int ans = 100;
    // edge case
    // if (n >= 100) {
    //     ans = n;
    // }
    for (int i = 0; i < 100; i+=5) {
        if (abs(n - ans) > abs(n - i)) {
            ans = i;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
     Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/