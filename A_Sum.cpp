#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b == c || b + c == a || a + c == b) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}