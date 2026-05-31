#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// for first person, odd turns 
// for 2nd per, even turns
// take first val from 1 to k1 and then see the no of turns 

void solve() {
    int n1, n2;
    cin >> n1 >> n2;
    if (n2 >= n1) {
        cout << "Second\n";
    }
    else cout << "First\n";
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