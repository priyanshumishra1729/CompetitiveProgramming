#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    string tt = s;
    reverse(tt.begin(),tt.end());
    if (tt==s) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}