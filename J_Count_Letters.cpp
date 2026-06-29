#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    int n=s.size();
    sort(s.begin(),s.end());
    map<char,int> mp;
    for (int i=0; i<n; ++i) {
        mp[s[i]]++;
    }
    for (auto it:mp) {
        cout << it.first << " " << ":" << " " << it.second << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}