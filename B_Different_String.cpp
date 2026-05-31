#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    string s; 
    cin >> s;
    int n = s.size();
    bool check = false;
    for (int i = 0; i < n; i++) {
        if (s[i] != s[0]) {
            swap(s[i], s[0]);
            check = true;
            break;
        }
    }
    if (!check) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    cout << s << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
}