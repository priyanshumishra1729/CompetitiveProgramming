#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// 10 3 = 5
// 1 3 5 7 9 2 4 6 8 10
// 7 7 = 6
// 1 3 5 7 2 4 6

void solve() {
    ll n, k;
    cin >> n >> k;
    ll cnt = (n + 1) / 2;
    if (k <= cnt) {
        cout << (2 * k - 1) << '\n';
    }
    else {
        k -= cnt;
        cout << (2 * k) << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
}