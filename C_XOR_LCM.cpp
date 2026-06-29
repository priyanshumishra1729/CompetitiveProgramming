#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int lcm(int a, int b) {
    return (a * (__gcd(a, b))) * b;
}

void solve() {
    ll c;
    cin >> c;
    ll a = c;
    ll b = c * (1LL << 24);
    cout << a << " " << b << '\n';
} 

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}