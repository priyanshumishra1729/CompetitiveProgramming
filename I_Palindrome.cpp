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

void solve()
{
   int x;
   cin>>x;
   string st=to_string(x);
    string t=st;
    rev(t);
    int t1=stoi(t);
    int st1=stoi(st);
    if (st1==t1)
    {
        cout<<t<<'\n';
        cout<<"YES\n";
    }
    else 
    {
        cout<<t1<<'\n';
            cout<<"NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */