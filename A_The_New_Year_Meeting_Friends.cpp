//Author: Priyanshu
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

/*
    7 1 4
    30 20 10

    7 -> 9 and 1 -> 9 and 4 -> 6

*/

void Solve()
{
    vector<int> a(3);
    for (int i = 0; i < 3; i++) cin >> a[i];
    sort(a.begin(), a.end());
    cout << abs(a[1] - a[0]) + abs(a[1] - a[2]) << '\n';
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

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}