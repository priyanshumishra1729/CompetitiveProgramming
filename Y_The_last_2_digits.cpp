#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    ll R = 1;
    R = (R * (A % 100)) % 100;
    R = (R * (B % 100)) % 100;
    R = (R * (C % 100)) % 100;
    R = (R * (D % 100)) % 100;
    cout << setw(2) << setfill('0') << R << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}