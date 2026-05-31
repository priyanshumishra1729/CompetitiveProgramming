#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// if we get even no of candies then Mihai grabs 
// if we get odd no of candies then Bihanca grabs 
// no of candies will add to the total no of candies 

void solve() {
    int n; 
    cin >> n;
    int ev = 0, od = 0;
    int xx; 
    for (int i=0; i<n; i++) {
        cin >> xx;
        if (xx%2==0) ev+=xx;
        else od+=xx;
    }
    if (ev>od) cout << "YES\n";
    else cout << "NO\n";
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