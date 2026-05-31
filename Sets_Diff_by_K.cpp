#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int n, k; cin >> n >> k;
    vector<int> b(n+1);
    vector<int> po;
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        if(b[i]) po.push_back(i);
    }
    bool check = true;
    for(int i = 1; i < po.size(); i++)
    {
        if(po[i] - po[i-1] <= k)
        check = false;
    }
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == 0)
        {
            bool cover = false;
            for(auto x : po)
            {
                if(abs(x - i) <= k)
                {
                    cover = true;
                    break;
                }
            }

            if(!cover)
                check = false;
        }
    }
    cout << (check ? "Yes" : "No") << '\n';
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
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}