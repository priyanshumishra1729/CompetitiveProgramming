#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string A, B;
    cin >> A >> B;
    cout << A.back() - '0' + B.back() - '0' << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}