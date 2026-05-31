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
    int num;
    cin >> num;
    vector<int> a(num);
    for (int i = 0; i < num; i++)
        cin >> a[i];
    bool sorted = true;
    for (int i = 0; i + 1 < num; i++)
    {
        if (a[i] > a[i + 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << "Bob\n";
        return;
    }
    for (int i = 0; i < num; i++)
    {
        if (a[i] > 1)
        {
            bool p = true;
            for (int j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0)
                {
                    p = false;
                    break;
                }
            }
            if (!p)
            {
                cout << "Alice\n";
                return;
            }
        }
    }
    cout << "Bob\n";
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

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */