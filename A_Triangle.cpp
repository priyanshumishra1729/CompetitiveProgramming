#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

bool tri(int a, int b, int c) {
    return ((b + c) > a && (a + b) > c && (a + c) > b);
}

bool segment(int a, int b, int c) {
    return (a == (b + c) || b == (a + c) || c == (a + b));
}

void Solve() 
{
    // here the idea of combinatorial check is applied 
    // like subsets generation 
    // has T.C of O(1)
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool n = false, di = false;
    n = n || (tri(a, b, c));
    n = n || (tri(a, b, d));
    n = n || (tri(a, c, d));
    n = n || (tri(b, c, d));
    di = di || (segment(a, b, c));
    di = di || (segment(a, b, d));
    di = di || (segment(a, c, d));
    di = di || (segment(b, c, d));
    if (n) {
        cout << "TRIANGLE\n";
    }
    else if (di) {
        cout << "SEGMENT\n";
    }
    else {
        cout << "IMPOSSIBLE\n";
    }
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    // cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}