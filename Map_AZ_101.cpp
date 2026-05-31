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

/*
    add x and y --> add stud name x with marks y, if already exist update 
    erase x --> erase marks of stud with name x, if entry exist
    print x --> print student marks with name x, if entry is not there for x, print 0
*/


void solve()
{
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--) {
        string s;
        cin >> s;
        if (s == "add") {
            string x;
            cin >> x;
            int y;
            cin >> y;
            mp[x] = y;
        }
        else if (s == "erase") {
            string x;
            cin >> x;
            if (mp.find(x) != mp.end()) {
                mp.erase(x);
            }
        }
        else {
            string x;
            cin >> x;
            if (mp.count(x)) cout << mp[x] << '\n';
            else cout << "0\n";
        }
    }
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