#include <bits/stdc++.h>
using namespace std;

// 1 - 2 + 3 - 17
// even places -> -
// odd places -> + 

void solve() {
    int n;
    cin >> n;
    int a[n+1];
    int sum=0;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) {
        if (i&1) {
            sum += a[i];
        }
        else {
            sum -= a[i];
        }
    }
    cout << sum << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}