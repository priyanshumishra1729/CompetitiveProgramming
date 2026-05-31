#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
don't make the size of the "a" vector fixed 
now push all the elem from 1 to n in the vec 
then use do-while or use just while (next_permutation(a.begin(), a.end()) != 0) {}
then it will give all the permutations 

for values storing in the vec, we can use 
iota(a.begin(), a.end(), 1) means we have to just give the starting number
*/

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    iota(a.begin(), a.end(), 1);
    // for (int i = 1; i <= n; i++) a.pb(i);
    // using do-while permutation method
    do {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    while (next_permutation(a.begin(), a.end()));

    // using only while-permutation 
    // while (next_permutation(a.begin(), a.end()) != 0) {
    //     for (int i = 0; i < n; i++) {
    //         cout << a[i] << " ";
    //     }
    //     cout << '\n';
    // }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */

