#include<bits/stdc++.h>
using namespace std;
#define int long long
int m = 1e9 + 7;

int binpow(int b, int c, int m1) {
    if (b == 0) return 1;
    if (c % 2 == 1) return (binpow(b, c - 1, m1) * b) % m1;
    else {
        int temp = binpow(b, c / 2, m1);
        return (temp * temp) % m1;
    }
}

int binpow1(int a, int x, int m2) {
    if (x == 0) return 1;
    if (x % 2 == 1) return (binpow(a, x - 1, m2) * a) % m2;
    else {
        int temp = binpow(a, x / 2, m2);    
        return (temp * temp) % m2;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int x = binpow(b, c, m - 1);
        int ans = binpow1(a, x, m);
        if (b == 0 && c != 0) {
            cout << 1 << '\n';
        }
        else if (a % m == 0 || a == 0) {
            cout << 0 << '\n';
        }
        else {
            cout << ans % m << '\n';
        }
    }
    return 0;
}

















