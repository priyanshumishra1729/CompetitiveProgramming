#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

const int inf = 2 * 1e3; 

void solve() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int a = 0; a < inf; a++) {
        for (int b = 0; b < inf; b++) {
            if ((1ll * (a * a) + b == n)) {
                if (a + (1ll * (b * b)) == m) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << '\n';
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