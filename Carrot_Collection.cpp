#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int lSum = 0;
        int rSum = 0;
        for (int i = 1; i < l; i++) {
            lSum += a[i];
        }
        for (int i = r + 1; i <= n; i++) {
            rSum += a[i];
        }
        cout << max(lSum, rSum) << '\n';
    }
    return 0;
}