#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;

/*
    n objects has price a[i]
    total money is m 
    max no of objects that can be bought
    
    sort the prices 
    sum the prices 
    then check if it can be brought in the money
    that the person has
    and when adding if it's not equal and greater than the amt 
    then stop the cnt and output the cnt 

    5 5 
    1 3 2 4 5
    1 + 2 + 3 = 6 
    cnt = 1
    cnt = 2
    cnt = 3
    then cnt = cnt - 1 = 2   
    if 6 > 5 then stop it and print cnt - 1
    using some different thing 
    let's try taking different assumption
    first add it  
    sum <= 5 then break
*/

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     int sum = 0, cnt = 0;
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//         if (sum > m) {
//             break;
//         }
//         else cnt++;
//     }
//     cout << cnt << '\n';
// }

// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     int ans = 0;
//     int sum = 0;
//     sort(a.begin(), a.end());
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//         if (sum > m) {
//             break;
//         }
//         else {
//             ans++;
//         }
//     }
//     cout << ans << '\n';
// }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int sum = 0; 
    int cnt = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum > m) break;
        else cnt++;
    }
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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


