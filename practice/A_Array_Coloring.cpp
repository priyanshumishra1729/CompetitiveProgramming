#include <bits/stdc++.h>
using namespace std;

// both colors have the same parity 
//  each color has atleast one element colored 
// first, we have to find the sum as same parity and 
// second, each color has atleast one element colored . . . 
// how to do it ? 
// cnt the odd and if it's even then YES else NO

void solve() {
    int n;
    cin >> n;   
    vector<int> a(n);
    int cnt = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) cnt++;
    }
    if (cnt % 2 == 0) cout << "YES\n";
    else  cout << "NO\n";
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}