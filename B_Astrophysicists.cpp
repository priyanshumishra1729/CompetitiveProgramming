#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, g;
    cin >> n >> k >> g;
    long long mxn = (g - 1) / 2;
    long long res = n * mxn;
    res -= res % g;
    cout << min(res, k * g) << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}