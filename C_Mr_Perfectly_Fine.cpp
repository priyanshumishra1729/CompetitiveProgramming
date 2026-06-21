#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;

void solve() {
    int n;
    cin >> n;
    int best10 = inf;
    int best01 = inf;
    int best11 = inf;
    while (n--) {
        int tt;
        string s;
        cin >> tt >> s;
        if (s == "10")
            best10 = min(best10, tt);
        else if (s == "01")
            best01 = min(best01, tt);
        else if (s == "11")
            best11 = min(best11, tt);
    }
    int ans = inf;
    if (best11 != inf)
        ans = min(ans, best11);
    if (best10 != inf && best01 != inf)
        ans = min(ans, best10 + best01);
    if (ans == inf)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
        solve();
}