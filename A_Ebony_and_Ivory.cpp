#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    gcd(a, b) | c 
    finding the gcd(a, b) then check if gcd(a, b) divides c or not 
*/

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    // use i * a + j * b = c 
    // for (int i = 0; i < 100; i++) {
    //     for (int j = 0; j < 100; j++) {
    //         if (i * a + j * b == c) {
    //             cout << "Yes\n";
    //             return;
    //         }
    //     }
    // }
    // int gc = __gcd(a, b);
    // if (c % gc == 0) cout << "Yes\n";
    // else cout << "No\n";

    bool check = false;
    for (int i = 0; a * i <= c; i++) {
    if ((c - a * i) % b == 0) {
        check = true;
        break;
    }
}
cout << (check ? "Yes" : "No") << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 *
 */