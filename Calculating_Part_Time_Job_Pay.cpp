#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll sum = 0; 
    for (int i = 0; i < n; i++){ 
        int a, t;
        cin >> a >> t;
        ll p = 1LL * a * t; 
        sum += p; 
    }    
    cout << sum << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}