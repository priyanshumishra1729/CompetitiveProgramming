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
    map<string, int> mp;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
    }
    if (mp.find("AC") != mp.end())
    {
        cout << "AC" << " " << "x" << " " << mp["AC"] << '\n';
    }
    else if (mp.find("AC") == mp.end()) {
        mp["AC"] = 0;
        cout << "AC" << " " << "x" << " " << mp["AC"] << '\n';
    }
    if (mp.find("WA") != mp.end())
    {
        cout << "WA" << " " << "x" << " " << mp["WA"] << '\n';
    }
    else if (mp.find("WA") == mp.end()) {
        mp["WA"] = 0;
        cout << "WA" << " " << "x" << " " << mp["WA"] << '\n';
    }
    if (mp.find("TLE") != mp.end())
    {
        cout << "TLE" << " " << "x" << " " << mp["TLE"] << '\n';
    }
    else if (mp.find("TLE") == mp.end())
    {
        mp["TLE"] = 0;
        cout << "TLE" << " " << "x" << " " << mp["TLE"] << '\n';
    }
    if (mp.find("RE") != mp.end())
    {
        cout << "RE" << " " << "x" << " " << mp["RE"] << '\n';
    }
    else if (mp.find("RE") == mp.end())
    {
        mp["RE"] = 0;
        cout << "RE" << " " << "x" << " " << mp["RE"] << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //  cin>>t;
    while (t--)
        solve();
    return 0;
}