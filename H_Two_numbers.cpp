#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int a,b;
    cin >> a >> b;
    // floor, ceil and round result
    double ans=(double)a/b;
    cout << "floor " << a << " / " << b << " = " << floor(ans) << '\n';
    cout << "ceil "  << a << " / " << b << " = " << ceil(ans)  << '\n';
    cout << "round " << a << " / " << b << " = " << round(ans) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}