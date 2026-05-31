#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// a = 2 b = 2 c = 11 
// a + b = 4 
// b + c = 9

template <typename T>
T max(T x, T y)
{
    return (x < y) ? y : x;
}

template< class T, class Compare >
const T& max( const T& a, const T& b, Compare comp ); // ignore the & for now, we'll cover these in a future lesson

void Solve() 
{
    int p1, p2, p3, p4, p5, p6, p7;
    cin >> p1 >> p2 >> p3 >> p4 >> p5 >> p6 >> p7;
    int a = p1, b = p2;
    if (a + b == p3) {
        cout << a << " " << b << '\n';
    } 
    int c = p7 - (a + b);
    cout << c << " ";
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