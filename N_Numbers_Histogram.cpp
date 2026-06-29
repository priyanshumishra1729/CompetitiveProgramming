#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    char ch;
    cin >> ch;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) {
        int x;
        cin >> x;       
        while(x--) cout << ch; 
        cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}