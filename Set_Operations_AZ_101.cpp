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
    First, read all the elements of set 
A
A and insert them into a set data structure, say uni, which will be used for computing the union. Also, maintain another set diff initialized with elements of 
A
A for computing the set difference 
A
−
B
A−B.

Next, read all the elements of set 
B
B. Insert each element into uni to compute the union. For each element in 
B
B, check if it exists in 
A
A (which can be stored in a set inter). If it does, add it to another set inters which stores the intersection result. Also, if the element exists in diff, remove it to compute the set difference 
A
−
B
A−B.

Finally, output the elements of uni, inters, and diff in sorted order.
*/

void solve()
{
    // int n, m;
    // cin >> n >> m;
    // vector<int> a(n), b(m);
    // set<int> unio;
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    // for (int i = 0; i < m; i++) {
    //     cin >> b[i];
    //     unio.insert(b[i]);
    // }
    // for (auto it : unio) cout << it << " ";
    // cout << '\n';
    // // Union done, now for intersection
    // for (int i = 0; i < n; i++) {
    //     auto t = st.find(a[i]);
    //     if (t != st.end()) cout << a[i] << " ";
    // }
    // cout << '\n';
    // // finding below the set diff (A - B)
    // for (int i = 0; i < m; i++) {
    //     auto it = st.find(b[i]);
    //     if (it != st.end()) {
    //         st.erase(b[i]);
    //     }
    // }
    // for (auto t : st) cout << t << " ";
    // cout << '\n';

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    set<int> A, B;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        A.insert(a[i]);
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        B.insert(b[i]);
    }
    set<int> unio, intersect, differ;
    // Union
    for (auto x : A) unio.insert(x);
    for (auto x : B) unio.insert(x);
    // Intersection
    for (auto x : A) {
        if (B.count(x)) intersect.insert(x);
    }
    // diff A - B
    for (auto x : A) {
        if (!B.count(x)) differ.insert(x);
    }
    // Union
    for (auto x : unio) cout << x << " ";
    cout << '\n';
    // Intersection
    for (auto x : intersect) cout << x << " ";
    cout << '\n';
    // set difference (A - B)
    for (auto x : differ) cout << x << " ";
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}