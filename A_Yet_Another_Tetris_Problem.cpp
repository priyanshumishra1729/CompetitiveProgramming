#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int odd = 0, even = 0; 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) odd++;
        else even++;
    }
    if (odd == n || even == n) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}