#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// first sort it and then 
// take first element make it 0 and then another eleme to be zero 
// above should be done k times... 

// bool cmp(pair<int, int>& a, pair<int, int>& b) 
// { 
//     return a.second < b.second; 
// } 

// void solve() {
//     int n, k; cin >> n >> k;
//     vector <int> a(n);
//     unordered_map <int, int> mp;
//     for (auto &x : a) {
//         cin >> x;
//         mp[x]++;
//     }
//     vector<pair<int, int>> vec(mp.begin(), mp.end());

//     // descending order 
//     sort(vec.begin(), vec.end(), [](pair<int, int>& a, pair<int, int>& b) {
//         return a.second > b.second; 
//     });
//     int rem = 0;
//     for (int i = 0; i < k; i++) {
//         for (auto &p : vec) {
//             rem += p.first * p.second;
//         }
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += a[i];
//     }
//     cout << sum - rem << '\n';
// }
void solve() {
    i64 n, k; cin >> n >> k;
    vector<i64> a(n);
    unordered_map<i64, i64> mp;
    for (auto &x : a) {
        cin >> x;
        mp[x]++;
    }
    priority_queue<pair<i64, i64>> pq;
    for (auto &p : mp) {
        i64 con = 1L * p.first * p.second;
        pq.push({con, p.first});
    }
    i64 sum = accumulate(a.begin(), a.end(), 0);
    i64 rem = 0;
    while (k-- && !pq.empty()) {
        rem += pq.top().first;
        pq.pop();
    }
    cout << sum - rem << '\n';
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