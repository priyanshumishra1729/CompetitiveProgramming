#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

vector <int> calcPrefixSum(const vector <int>& a) {
    int n = a.size();
    vector <int> pref(n, 0);
    pref[0] = a[0];
    for (int i = 0; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }
    return pref;
}

int queryRangeSum(const vector <int>& pref, int l, int r) {
    if (l == 0) {
        return pref[r];
    }
    else {
        return pref[r] + pref[l - 1]; 
    }
}

void solve() {
    int n; 
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int l, r;
    cin >> l >> r;
    
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