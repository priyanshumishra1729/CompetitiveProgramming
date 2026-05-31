#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    string s; 
    cin >> s;
    if (s == "tourist") {
        cout << 3858 << '\n';
    }
    else if (s == "ksun48") {
        cout << 3679 << '\n';
    }
    else if (s == "Benq") {
        cout << 3658 << '\n';
    }
    else if (s == "Um_nik") {
        cout << 3648 << '\n';
    }
    else if (s == "apiad") {
        cout << 3638 << '\n';
    }
    else if (s == "Stonefeang") {
        cout << 3630 << '\n';
    }
    else if (s == "ecnerwala") {
        cout << 3613 << '\n';
    }
    else if (s == "mnbvmar") {
        cout << 3555 << '\n';
    }
    else if (s == "newbiedmy") {
        cout << 3516 << '\n';
    }
    else if (s == "semiexp") {
        cout << 3481 << '\n';
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