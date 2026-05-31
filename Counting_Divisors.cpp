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

// got TLE using the below method 
// int divisors(int n) {
//     int cnt = 0;
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             cnt++;
//             if (n / i != i) {
//                 cnt++;
//             } 
//         }
//     }
//     return cnt;
// }

// using SPF arr method
#define MAXN 1000000
int spf[MAXN+1];
void pre() {
    for (int i = 2; i <= MAXN; i++) {
        spf[i] = i;
    }
    for (int i = 2; i <= MAXN; i++) {
        if (spf[i] == i) {
            for (int j = 2 * i; j <= MAXN; j += i) {
                if (spf[j] == j) {
                    spf[j] = i;
                }
            }
        }
    }
}

void Solve() {
    int n;
    cin >> n;
    // cout << divisors(n) << '\n';
    int ans = 1;
    while (n > 1) {
        int prime = spf[n];
        int cnt = 0;
        while (n % prime == 0) {
            n /= prime;
            cnt++;
        }
        ans *= cnt+1;
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    pre();
    int t;
    cin >> t;
    while (t--) Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/