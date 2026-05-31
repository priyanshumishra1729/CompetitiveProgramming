#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (x > y || y == 0) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        int n = x + y;

        // Step 1: chain of y nodes
        for (int i = 2; i <= y; i++) {
            cout << i - 1 << " " << i << "\n";
        }

        // Step 2: attach x nodes to root (node 1)
        int cur = y + 1;
        for (int i = 0; i < x; i++) {
            cout << 1 << " " << cur << "\n";
            cur++;
        }
    }
}