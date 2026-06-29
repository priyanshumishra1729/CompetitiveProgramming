#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(int a, ll b) {
    if (b==0) return a;
    return gcd(b,a%b);
}

ll lcm(ll a, ll b) {
    return 1LL * (a/gcd(a,b))*b;
}
 
void solve() {
    ll a,b;
    cin >> a >> b;
    cout << lcm(a,b) << " " << gcd(a,b) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}