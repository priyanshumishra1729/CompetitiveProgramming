#include <bits/stdc++.h>
using namespace std;
#define int long long
#define INF (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

// first putting odd numbers
// then all the odd numbers existing in it
// as diff betn odd & even is 1 
// and diff btn even numbers is 2 and so as for odds

void Solve() 
{
   int n; cin >> n;
   vector <int> vec;
   for (int i = 1; i <= n; i++) {
       // odd calcn
       if (i & 1) {
            vec.push_back(i);
            // cout << i << " ";
       }
   }

   cout << '\n';
   
   for (int i = 2; i <= n; i+=2) {
       // even calcn
        vec.push_back(i);
        // cout << i << " ";
   }

   // reverse the numbers 
//    reverse(vec.begin(), vec.end());

    for (auto it : vec) {
        if (n == 4) {
            cout << 2 << " " << 4 << " " << 1 << " " << 3;
            return;
        }

        if (n == 1) {
            cout << n << '\n';
            return;
        }
    }    

   for (int i = 1; i <= n; i++) {
        if (abs(vec[i - 1] - vec[i]) == 1) {
            cout << "NO SOLUTION\n";
            return;
        } 
   }
   
   for (auto it : vec) cout << it << " ";
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
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}