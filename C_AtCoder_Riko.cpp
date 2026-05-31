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
using ull=unsigned long long;
using pii=pair<int,int>;
//using i128=__int128_t;
void die(string S){puts(S.c_str());exit(0);}
const ll mod=1e9+7;
// ll binpow(ll a, ll p, ll m) {
//     if (p == 0) return 1;
//     if (p % 2 == 1) return (binpow(a, p - 1, m) * a) % m;
//     else {
//         int temp = binpow(a, p / 2, m);
//         return (temp * temp) % m;
//     }
// }

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0, mxn = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mxn = max(mxn, a[i]);        
    }
    vector<ll> res;
    for (ll d = 1; d * d <= sum; d++) {
        if (sum % d != 0) continue;
        ll l1 = d;
        ll l2 = sum / d;
        for (ll l : {l1, l2}) {
            if (l < mxn) continue;
            if (sum % l != 0) continue;
            ll k = sum / l;
            if (!(k <= n && n <= 2 * k)) continue;
            ll c = 0;
            for (ll x : a) if (x == l) c++;
            ll m = n - c;
            if (m % 2 != 0) continue;
            if (sum - c * l != (m / 2) * l) continue;
            res.push_back(l);
        }
    }
    sort(res.begin(), res.end());
   res.erase(unique(res.begin(), res.end()), res.end());
   for (int i = 0; i < (int)res.size(); i++) {
        if (i) cout << ' ';
        cout << res[i];
   }
   cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
//  cin>>t;
    while(t--) solve();
    return 0;
}