#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> cnt;
    unordered_map<int, int> cost;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int xx = a[i];
        int op = 0;
        while (true) {
            cnt[xx]++;
            cost[xx] += op;
            if (xx == 0) break;
            xx /= 2;
            op++;
        }
    }
    int res = INT_MAX;
    for (auto it = cnt.begin(); it != cnt.end(); it++) {
        int val = it->first;
        int cc = it->second;
        if (cc == n) {
            res = min(res, cost[val]);
        }
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}