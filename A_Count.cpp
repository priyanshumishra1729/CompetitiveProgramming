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
    string s;
    cin >> s;
    int sum = 0;
    for (char ch : s) {
        if (ch == 'i' || ch == 'j') {
            sum++;
        }
    }
    cout << sum << '\n';
}

int32_t main() {
    auto begin = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Solve();
    return 0;
}