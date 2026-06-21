#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    string o = "codeforces";
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        if (s[i] != o[i]) ans++;
    }   
    cout << ans << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}