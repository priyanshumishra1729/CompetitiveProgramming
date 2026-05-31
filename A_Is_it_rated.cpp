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
    int r,x;
    cin >> r >> x;
    if (x == 1) {
        if (r >= 1600 && r <= 2999) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
    else {
        if (r >= 1200 && r <= 2399) cout << "Yes\n";
        else cout << "No\n";
    }
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