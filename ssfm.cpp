#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// min of arr
// last idx where min is present 
// first idx where min is present
// cnt freq of min in arr

void Solve() 
{
    int n; cin >> n; 
    vector <int> a(n);
    int mn = INT_MAX;
    int fidx = 0, freq = 0, lidx = 0;
    for (auto &x : a) cin >> x;
    for (int i = 0; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
            fidx = i;
            freq = 1;
        }
        else if (a[i] == mn) {
            lidx = i;
            freq++;
        }
    }
    cout << "minimum is: " << mn << '\n';
    cout << "last idx: " << lidx << '\n';
    cout << "First idx: " << fidx << '\n';
    cout << "count freq of min: " << freq << '\n';
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    // cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}