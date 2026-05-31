//Author: Priyanshu
#include<bits/stdc++.h>
//#pragma GCC optimize("O2")
using namespace std;
#define pb emplace_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define rALL(x) (x).rbegin(),(x).rend()
#define srt(x) sort(ALL(x))
#define rev(x) reverse(ALL(x))
#define rsrt(x) sort(rALL(x))
#define sz(x) (int)(x.size())
#define inf 0x3f3f3f3f
#define lb(v,x) (int)(lower_bound(ALL(v),x)-v.begin())
#define ub(v,x) (int)(upper_bound(ALL(v),x)-v.begin())
#define uni(v) v.resize(unique(ALL(v))-v.begin())
using ll=long long;
void solve()
{
    ll b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;

    if (x + y > n) {
        cout << -1 << '\n';
        return;
    }
    ll maxRo = min(b / x, g / y);
    ll needRo = (b + g + n - 1) / n;
    if (needRo <= maxRo) cout << needRo << '\n';
    else cout << -1 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}