#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// ascending order sorted
// chose k nums in a and m in b 
// first chosen num is strictly less than 2nd chosen in 2nd arr

// how to solve it ? 
// while loop for k and m different 
// and then 2 loops and then 

void solve() {
    int n1, n2;
    cin >> n1 >> n2;
    int k, m; 
    cin >> k >> m;
    vector<int> a(n1), b(n2);
   for (int i = 0; i < n1; i++) {
        cin >> a[i];
   }
   for (int j = 0; j < n2; j++) {
        cin >> b[j];
   }
   if (a[k - 1] < b[n2 - m]) cout << "YES\n";
   else cout << "NO\n";  

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