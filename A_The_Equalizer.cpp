#include <bits/stdc++.h>
using namespace std;

void solve() {
    int num, k;
    cin >> num >> k;
    int sum = 0;
    for (int i = 0; i < num; i++) {
        int in;
        cin >> in;
        sum += in;
    }
    if (sum % 2 == 1 || (k % 2 == 1 && num % 2 == 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}