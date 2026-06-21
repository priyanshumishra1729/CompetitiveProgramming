#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n;
    vector<int> l(1001, -1);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        l[x] = i;
    }
    int res = -1;
    for (int i = 1; i <= 1000; i++) {
        if (l[i] == -1) continue;
        for (int j = 1; j <= 1000; j++) {
            if (l[j] == -1) continue;
                if (__gcd(i, j) == 1) {
                    res = max(res, l[i] + l[j]);
                }
            }
        }
    cout << res << "\n";
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}