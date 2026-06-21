#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

// n m 
// 3 X 3 
// for odd row, we fill with # 
// for even row, we fill with # at end
// In gap of 4, it will repeat the occurence -> periodic thing
// we have to deal with only even numbers 
// we should first make all # then for even add . and for odd, add this #
// now, how to deal with it ? 
// # on col = 1 and remaining are . is only present in row % 4 == 0
// else it's only in the i % 2 == 0
 
void solve() {  
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i % 2 == 0) {
                if (i % 4 == 0) {
                    if (j == 1) {
                        cout << '#';
                    } 
                    else cout << '.';
                }  
                else {
                    if (j == m) {
                        cout << '#';
                    }
                    else cout << '.';
                }
            }
            else cout << '#'; 
        }
        cout << '\n';
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