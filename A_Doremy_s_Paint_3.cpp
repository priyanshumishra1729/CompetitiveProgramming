#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n; 
    cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    bool equal = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    // for (int i = 0; i < n; i++) {
    //     if (a[i] == a[i + 1]) {
    //         equal = true;
    //     }
    // }
    // bool check = false;
    // for (auto it : mp) {
    //     if (it.second == n / 2) {
    //         check = true;
    //     } 
    // }
    // if (equal == true) {
    //     cout << "Yes\n";
    //     return;
    // }
    // if (check == true) {
    //     cout << "Yes\n";
    //     return;
    // }
    // else {
    //     cout << "No\n";
    // }
    if (mp.size() >= 3) puts("No");
    else {
        if (abs(mp.begin()->second - mp.rbegin()->second) <= 1) {
            puts("Yes");
        }
        else puts("No");
    }
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
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