#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    string s; cin >> s;
    string t = s;
    reverse(t.rbegin(), t.rend());
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == '0') t[i] = '0';
        else if (t[i] == '1') t[i] = '1';
        else if (t[i] == '6') t[i] = '9';
        else if (t[i] == '8') t[i] = '8';
        else if (t[i] == '9') t[i] = '6';
    }
    cout << t << '\n';
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