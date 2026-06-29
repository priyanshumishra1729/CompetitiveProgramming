#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    if (s.back() == 's') {
        s.pop_back();
        s.pop_back();
        s.push_back('i');  
    }
    cout << s << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}   