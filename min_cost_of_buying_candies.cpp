#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    chosen any candies for free as long as 
    cost of chosen candy is less <= min(c1, c2); 
    c1 = cost of 1st candy
    c2 = cost of 2nd candy
    c3 = chosen 3rd candy 
    c3 <= min(c1, c2) 
    let's do it for 1 to n  
    6, 5, 7, 9, 2, 2 -> 23
    c1 = 6, c2 = 5 and c3 = 7
*/

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    } 
    int sum = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; i++) {
            int c1 = a[i], c2 = a[j];
            for (int k = i; k <= j; k++) {
                int c3 = a[k];
                if (c3 <= min(c1, c2)) {
                    sum += c1 + c2; 
                }
            }
        }
    }
    cout << sum << '\n';
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