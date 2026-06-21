#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    for (int i = 1; i < N; i++) {
        if (abs(a[i] - a[i - 1]) != 5 && abs(a[i] - a[i - 1]) != 7) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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