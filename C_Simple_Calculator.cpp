#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll X, Y;
    cin >> X >> Y; 
    cout << X << " + " << Y << " = " << X + Y << '\n';
    cout << X << " * " << Y << " = " << X * Y << '\n';
    cout << X << " - " << Y << " = " << X - Y << '\n'; 
}

int main() {
    int T = 1;
    // cin >> T;    
    while(T--) solve();
}