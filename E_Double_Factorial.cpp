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
    if (n < 2) {
        cout << 1 << '\n';
    }
    else {
        int p = 1;
        for (int i = n; i >= 1; i -= 2) {
            p *= i;
            // cout << p << " ";
        }
        int cnt = 0;
        bool flag = false;
        while (p != 0) {
            int digit = p % 10;
            // cout << digit << " ";
            if (digit == 0) {
                cnt++;
                flag = true;
            }
            else {
                flag = false;
            }
            if (!flag) {
                cout << cnt << '\n';
                break;
            }
            // cout << cnt << " ";
            p /= 10;
        }
        // cout << cnt << '\n';
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