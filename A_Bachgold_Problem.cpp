#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int k;
    cin >> k;
    int sum = 0;
    vector<int> ans;
    if (k % 2 == 0) ans.assign(k / 2, 2);
    else {
        ans.push_back(3);
        for (int i = 0; i < (k - 3) / 2; i++) {
            ans.push_back(2);
        }
    }
    cout << ans.size() << '\n';
    for (auto d : ans) {
        cout << d << " ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */