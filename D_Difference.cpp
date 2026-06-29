#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    double A, B, C, D;
    cin >> A >> B >> C >> D;
    long double x = (double)A * B;
    long double x1 = (double)C * D;  
    cout << "Difference = " << x - x1 << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}