#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        int a[n];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > q) 
                a[i] = 0;
            else 
                a[i] = 1;
        }
        long long ans = 0;
        long long l = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                l++;
            }
            else {
                if (l >= k) {
                    ans += (l - k + 1) * (l - k + 2) / 2;
                }
                l = 0;
            }
        }
        if (l >= k) {
            ans += (l - k + 1) * (l - k + 2) / 2;
        }
        cout << ans << '\n';
    }
}