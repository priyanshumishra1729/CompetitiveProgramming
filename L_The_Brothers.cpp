#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string a,b,c,d;
    cin >> a >> b >> c >> d;
    if (b==d) cout << "ARE Brothers\n";
    else cout << "NOT\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}