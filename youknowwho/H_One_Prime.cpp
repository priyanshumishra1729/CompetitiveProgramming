#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(ll n) {
    if (n==1) return false;
    for (ll i=2; i*i<=n; ++i) {
        if (n%i==0) return false;
    } 
    return true;
} 

void solve() {
    ll x;
    cin >> x;
    if (prime(x)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}