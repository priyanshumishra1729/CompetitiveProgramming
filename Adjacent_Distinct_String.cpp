#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// void solve() {
//     string s; 
//     cin >> s;
//     int n = s.size();
//     sort(s.begin(), s.end());
//     vector<string> res; 
//     bool check = true;
//     while (next_permutation(s.begin(), s.end()) != 0) {
//         // for (int i = 0; i < s.size(); i++) {
//         //     if (s[i] == s[i + 1]) {
//         //         check = false;
//         //         break;
//         //     }
//         //     else {
//         //         res.push_back(s);
//         //     }
//         // }
//         for (int i = 0; i < n; i++) {
//             cout << s[i] << " "; 
//         }  
//         cout << '\n';
//     }
//     // if (check == true) {
//     //     cout << "YES\n";
//     //     for (auto it : res) {
//     //         cout << it;
//     //     }
//     // }
//     // else {
//     //     cout << "NO\n";
//     // }
// }

// bool check(string &s) {
//     for (int i = 0; i < (int)s.size() - 1; i++) {
//         if (s[i] == s[i + 1]) {
//             return false;
//         }
//     }
//     return true;
// }

// void solve() {
//     string s;
//     cin >> s;

//     sort(s.begin(), s.end());

//     do {
//         if (check(s)) {
//             cout << "Yes\n";
//             cout << s << '\n';
//             return;
//         }
//     } 
//     while (next_permutation(s.begin(), s.end()));

//     cout << "No\n";
// }

void solve() {
    string s;
    cin >> s;
    map<char,int> mp;
    for (char ch : s) mp[ch]++;
    int n = s.size(), mx = 0;
    priority_queue<pair<int,char>> pq;
    for (auto it : mp) {
        mx = max(mx, it.second);
        pq.push({it.second, it.first});
    }
    if (mx > (n + 1) / 2) {
        cout << "No\n";
        return;
    }
    string res;
    while (pq.size() > 1) {
        auto p1 = pq.top(); pq.pop();
        auto p2 = pq.top(); pq.pop();
        res += p1.second;
        res += p2.second;
        if (--p1.first) pq.push(p1);
        if (--p2.first) pq.push(p2);
    }
    if (!pq.empty())
        res += pq.top().second;
    cout << "Yes\n" << res << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    cin >> t;
    while(t--)
        solve();
}