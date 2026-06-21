#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    // gap from 0 to 1st station 
    int res = a[0];
    for (int i = 1; i < n; i++) {
        res = max(res, a[i] - a[i - 1]);
    }
    res = max(res, 2 * (x - a[n - 1]));
    cout << res << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}