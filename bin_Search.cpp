#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// int check (vector<int> a, int mid, int x) {
//     // if (a[mid] >= x) return 1;
//     // else return 0; 

//     if (a[mid] < a[0]) return 1;
//     else return 0;
// }

int check (vector<int> a, int mid, int x) {
    if (mid == a.size() - 1) return 1;
    // for finding the peak 
    if (a[mid] > a[mid + 1]) return 1;
    else return 0;
}

void solve() {
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // for (auto &x : a) cin >> x;
    // int xx;
    // cin >> xx;
    // int low = 0, high = n - 1, ans = 0;
    // while (low <= high) {
    //     int mid = low + (high - low) / 2;
    //     if (a[mid] == 1) {
    //         ans = mid;
    //         high = mid - 1;
    //     }
    //     else low = mid + 1; 
    // }
    // cout << ans << '\n';

    // using lower bound 
    // int n; 
    // cin >> n;
    // vector <int> a(n);
    // for (auto &x : a) cin >> x;
    // int x;
    // cin >> x;
    // int lo = 0, hi = n - 1;
    // int ans = n;
    // while (lo <= hi) {
    //     int mid = lo + (hi - lo) / 2;
    //     if (check(a, mid, x)) {
    //         ans = mid;
    //         hi = mid - 1;
    //     }
    //     else {
    //         lo = mid + 1;
    //     }
    // }
    // cout << ans << '\n';


    int n; 
    cin >> n;
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    int x;
    cin >> x;
    int lo = 0, hi = n - 1;
    int ans = n;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (check(a, mid, x) == 1) {
            ans = mid;
            hi = mid - 1;
        }
        else {
            lo = mid + 1;
        }
    }
    cout << ans << '\n';
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