#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// int binpow(int a, int p, int m) {
//     if (p == 0) return 1;
//     if (p % 2 == 1) return (binpow(a, p - 1, m) * a) % m;
//     else {
//         int temp = binpow(a, p / 2, m);
//         return (temp * temp) % m;
//     }
// }

void Solve() {
    int n, m;
    cin >> n >> m;
    vector<int> d(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        d[a]++;
        d[b]++;
    }
    for (int i = 1; i <= n; i++) {
        int allow = (int)n - 1 - d[i];
        if (allow >= 3) {
            cout << (allow * (allow - 1) * (allow - 2)) / 6;
        }
        else {
            cout << 0;
        }
        if (i < n) cout << " ";
    }
    cout << '\n';
}

int32_t main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Solve();
    return 0;
}