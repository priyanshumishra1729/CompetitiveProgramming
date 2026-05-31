#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;

void solve()
{
    int num;
    cin >> num;
    unordered_map<int, int> freq;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            int f;
            cin >> f;
            freq[f]++;
        }
    }
    int mx = 0;
    for (auto &pval : freq)
    {
        mx = max(mx, pval.second);
    }
    if (mx > num * (num - 1))
        cout << "NO\n";
    else
        cout << "YES\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */