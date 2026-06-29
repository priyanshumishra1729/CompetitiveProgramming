#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int X;
    cin >> X;
    int Y = X / 365; 
    int R = X % 365; 
    int M = R / 30; 
    int D = R % 30; 
    cout << Y << " years" << '\n';
    cout << M << " months" << '\n';
    cout << D << " days" << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}