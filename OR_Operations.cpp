#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int total = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total |= a[i];
    }
    int seg = 0;
    int curr = 0;
    for (int i = 0; i < n; i++) {
        curr |= a[i];
        if (curr == total) {
            seg++;
            curr = 0;
        }
    }
    cout << n - seg << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}