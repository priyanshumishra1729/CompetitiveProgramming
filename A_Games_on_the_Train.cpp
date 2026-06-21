#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

const int inf = 1e9;

// h = [2 6 4]
// x = [1 2 3]
// 1 <= x <= k
// 2 + 1 = 3 
// 6 + 2 = 8
// 4 + 3 = 7
// 3 8 7
// h = [5 4 6 6 1] 
// x = [1 2 3 4 5]
//  6 6 9 10 6
// 3 3 3 3
// 1 2 3 4 
// 4 5 6 7
// take the values of xi as 1 . . . n
// add the values to hi then find the min number 
// how about doing this ? 
// taking k from 1 to inf 
// and then choosing the value of x[i]
// like implementation is fuck*d my mind
// or we should play with inequality 
// but, inequality is also not giving valid results 
// like 1 <= x[i] <= k 
// h[i] + x[i] = sum[i]
// 1 <= sum[i] - h[i] <= k 
// sum[i] - h[i] >= 1 and sum[i] - h[i] <= k 
// so, 1 + h[i] <= H <= k + h[i] 

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    int res = *max_element(h.begin(), h.end()) - *min_element(h.begin(), h.end());
    cout << res + 1 << '\n';
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