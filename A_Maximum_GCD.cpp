#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    cout << ceil(n / 2) << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}