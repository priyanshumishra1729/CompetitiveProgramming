// Author: Priyanshu
#include <bits/stdc++.h>
// #pragma GCC optimize("O2")
using namespace std;
#define pb emplace_back
#define mp make_pair
#define ALL(x) (x).begin(), (x).end()
#define rALL(x) (x).rbegin(), (x).rend()
#define srt(x) sort(ALL(x))
#define rev(x) reverse(ALL(x))
#define rsrt(x) sort(rALL(x))
#define sz(x) (int)(x.size())
#define inf 0x3f3f3f3f
#define lb(v, x) (int)(lower_bound(ALL(v), x) - v.begin())
#define ub(v, x) (int)(upper_bound(ALL(v), x) - v.begin())
#define uni(v) v.resize(unique(ALL(v)) - v.begin())
using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;
// using i128=__int128_t;
void die(string S)
{
    puts(S.c_str());
    exit(0);
}
const ll mod = 1e9 + 7;

void solve()
{
    string st, t;
    cin >> st >> t;
    int n = st.size(), m = t.size();
    vector<int> poS, poT;
    for (int i = 0; i < n; i++)
        if (st[i] != 'A')
            poS.push_back(i);
    for (int i = 0; i < m; i++)
        if (t[i] != 'A')
            poT.push_back(i);
    if (poS.size() != poT.size())
    {
        cout << -1;
        return;
    }
    for (int i = 0; i < poS.size(); i++)
    {
        if (st[poS[i]] != t[poT[i]])
        {
            cout << -1;
            return;
        }
    }
    ll ops = 0;
    int lS = poS.empty() ? n : poS[0];
    int lT = poT.empty() ? m : poT[0];
    ops += abs(lS - lT);
    for (int i = 1; i < poS.size(); i++)
    {
        int gpS = poS[i] - poS[i - 1] - 1;
        int gpT = poT[i] - poT[i - 1] - 1;
        ops += abs(gpS - gpT);
    }
    if (!poS.empty())
    {
        int tS = n - 1 - poS.back();
        int tT = m - 1 - poT.back();
        ops += abs(tS - tT);
    }

    cout << ops;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
        solve();
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */