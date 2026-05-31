#include <bits/stdc++.h>
using namespace std;
// #define int long long
// int m = 1e9 + 7;

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
    long long h;
    cin >> n >> m >> h;
    vector<long long> og(n+1);
    for (int i = 1; i <= n; i++) cin >> og[i];
    vector<int> b(m+1);
    vector<long long> c(m+1);
    for (int i = 1; i <= m; i++) cin >> b[i] >> c[i];
    vector<long long> ad(n+1, 0);
    vector<int> la(n+1, 0);
    int epoch = 1;
    long long cMax = *max_element(og.begin()+1, og.end());
    for (int i = 1; i <= m; i++) {
        int id = b[i];
        long long &ai = ad[id];
        if (la[id] != epoch) {
            ai = c[i];
            la[id] = epoch;
        } else {
            ai += c[i];
        }
        long long val = og[id] + ai;
        if (val > h) {
            epoch++;
            cMax = *max_element(og.begin()+1, og.end());
        } else {
            cMax = max(cMax, val);
        }
    }
    for (int i = 1; i <= n; i++) {
        long long x = (la[i]==epoch ? ad[i] : 0);
        cout << og[i] + x << " ";
    }
    cout << "\n";
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