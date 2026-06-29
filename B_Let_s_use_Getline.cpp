#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    getline(cin,s); 
    for (int i=0; i<s.size(); ++i) {
        if (s[i]!='\\') cout << s[i]; 
        else break;
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