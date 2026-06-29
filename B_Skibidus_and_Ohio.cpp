#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1]) {
            cout << 1 << '\n';
            return;
        }
    }
    cout << s.size() << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}