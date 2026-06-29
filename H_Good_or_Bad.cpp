#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string s;
    cin >> s;
    int n=s.size();
    for (int i=0; i<n; ++i) {
        string su=s.substr(i,3); 
        if (su=="010"||su=="101") {
            cout << "Good\n";
            return;
        }
    }
    cout << "Bad\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}