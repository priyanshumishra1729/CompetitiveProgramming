#include <bits/stdc++.h>
using namespace std;

#define ll long long

int gcd(int a, int b) {
    if (b==0) return a;
    return gcd(b,a%b); 
}

void solve() {
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}