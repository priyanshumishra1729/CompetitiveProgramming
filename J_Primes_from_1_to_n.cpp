#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int x) {
    if (x<2) return false;
    for (int i=2; i*i<=x; i++) {
        if (x%i==0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    for (int i=2; i<=n; ++i) {
        if (isPrime(i)) {
            cout << i << " "; 
        } 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}   