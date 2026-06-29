#include <bits/stdc++.h>

using namespace std;

void solve() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;
    long double l = b * log(a); 
    long double r = d * log(c); 
    if (l > r) cout << "YES\n";
    else cout << "NO\n";
}
        
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) solve();
}