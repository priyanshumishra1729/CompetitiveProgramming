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
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    int h = abs((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    int p =  abs((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    int b = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    if (h == p + b || p == h + b || b == h + p) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/