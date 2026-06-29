#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int A, B, C;
    char S, Q; 
    cin >> A >> S >> B >> Q >> C;
    if (S == '+') {
        if (A + B == C) cout << "Yes\n";
        else cout << A + B << '\n';
    }
    else if (S == '-') {
        if (A - B == C) cout << "Yes\n";
        else cout << A - B << '\n';
    }
    else {
        if (A * B == C) cout << "Yes\n";
        else cout << A * B << '\n';
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}