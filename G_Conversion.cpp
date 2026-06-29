#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    int n=s.size();
    // replace comma with space and capital with small and vice-versa    
    for (int i=0; i<n; ++i) {
        if (s[i]==',') {
            s[i] = ' '; 
        }
        else if (isupper(s[i])) 
            s[i]=tolower(s[i]);
        else if (islower(s[i])) 
            s[i]=toupper(s[i]);
    }
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}