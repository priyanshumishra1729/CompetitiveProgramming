#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int n; 
    cin >> n; 
    vector<string> matrix(n);
    for (int i = 0; i < n; i++) {
        cin >> matrix[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] == '#') {
                cout << j + 1 << " "; 
                break;
            }
        }
    }
    cout << endl;
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