#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

// press multiple times 
// using map for freq of chars 
// if -1 then output highest freq

void solve() {
    string s;
    int n = s.size();
    unordered_map <char, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> s;
        mp[s[i]]++;
    }
    string res = " ";
    string r = " ";
    int mx = INT_MIN;
    for (auto it : mp) {
        if (it.second == 1) {
            res.push_back(it.first);
        }
        if (mx > it.second) {
            mx = it.second;
            r.push_back(it.first);
        }
    }
    if (res.empty() == false) {
        cout << res << '\n';
    }
    else if (res.empty() == true) {
        cout << r << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
}