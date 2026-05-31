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

/*
    using map to store the freq 
    and then Use 

*/

void Solve() {
    int n;
    cin >> n;
    int xv;
    cin >> xv;       
    int mx = xv;
    int sum = 0;
    for (int i = 1; i < n; i++) {
        cin >> xv;
        if (xv < mx) {
            sum += (mx - xv);
        } else {
            mx = xv;
        }
    }
    cout << sum << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t=1;
    // cin >> t;
    while (t--) Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/