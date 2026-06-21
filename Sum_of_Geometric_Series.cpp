#include <bits/stdc++.h>
using namespace std;

const int M = 1e9; 

int binpow(long long a, long long p) {
    if (p == 0) {
        return 1;
    }
    if (p & 1) return binpow(a, p - 1) * a;
    else {
        long long temp = binpow(a, p / 2);
        return temp * temp; 
    }
}

void solve() {
    long long n, m;
    cin >> n >> m;
    long long curr = 1, sum = 0;
    for (int i = 0; i <= m; i++) {
        sum += curr; 
        if (sum > 1'000'000'000) {
            cout << "inf\n";
            return;
        }
        curr *= n;
    }
    cout << sum << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}