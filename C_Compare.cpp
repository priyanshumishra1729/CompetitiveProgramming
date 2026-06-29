#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string x,y;
    cin >> x >> y; 
    if (x<y) 
        cout << x << '\n';
    else 
        cout << y << '\n';    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}