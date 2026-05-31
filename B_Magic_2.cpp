#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// green card > red card 
// blue card > green card 
// choosing one card and multiply integer by 2 
// 7 2 5 
// k = 3 

void Solve() 
{
    int a, b, c; cin >> a >> b >> c;
    int k; cin >> k;
    int cnt = 0;
    while (b <= a) {
        b *= 2;
        cnt++;
    }
    while (c <= b) {
        c *= 2;
        cnt++;
    }
    if (cnt <= k) cout << "Yes\n";
    else cout << "No\n";
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