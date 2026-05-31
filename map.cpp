#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n;
    vector <int> a(n);
    unordered_map <int, int> mp;
    for (auto &x : a) {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++) {
        for (auto it : mp) {
            if (it.first == a[i]) {
                cout << it.second << " ";
            }
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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