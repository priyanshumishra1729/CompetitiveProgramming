#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;
    if (n <= m) {
        cout << m - n << '\n';
    }
    else {
        cout << (n - m) % 2 << '\n';
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}