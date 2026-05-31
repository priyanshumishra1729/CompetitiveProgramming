#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() {
    int num;
    cin >> num;
    vector<int> b(num);
    for (int i = 0; i < num; i++) cin >> b[i];
    int mxn = *max_element(b.begin(), b.end());
    unordered_map<int,int> freq;
    for (int i = 0; i < num; i++) {
        if (b[i] < mxn) {
            freq[b[i]]++;
            if (freq[b[i]] > 1) {
                cout << "No\n";
                return;
            }
        }
    }
    cout << "Yes\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    cin >> t;
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