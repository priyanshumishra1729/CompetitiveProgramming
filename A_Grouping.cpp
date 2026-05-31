#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int x, y; cin >> x >> y;
    int g1[7] = {1, 3, 5, 7, 8, 10, 12};
    int g2[4] = {4, 6, 9, 11};
    int g3[1] = {2};
    bool found = false;
    for (int i = 0; i < 7; i++) {
        if (x == g1[i] && y == g1[i]) found = true;
    }
    for (int i = 0; i < 4; i++) {
        if (x == g2[i] && y == g2[i]) found = true;
    }
    for (int i = 0; i < 1; i++) {
        if (x == g3[i] && y == g3[i]) found = true;
    }
    if (found) cout << "Yes\n";
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