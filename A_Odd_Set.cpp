#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// 2 3 4 5 
// make the pair (2 3) (4 5)
// 2 + 3 = 5
// 4 5 = 9
// if we find no odd then we do it NO 
// a + b = c -> c is odd 

void solve() {
    int n;
    cin >> n;
    vector<int> a(2*n);
    for (int i=0; i<2*n; i++) {
        cin >> a[i];
    }
    int even=0, odd=0;
    for (auto it : a) {
        if (it % 2 == 0) even++;
        else odd++;
    }
    if (even == odd) cout << "Yes\n";
    else cout << "No\n";
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