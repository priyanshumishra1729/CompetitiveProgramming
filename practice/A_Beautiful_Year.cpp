#include <bits/stdc++.h>
using namespace std;

bool distinct(int x) {
    string s = to_string(x);
    set<char> st(s.begin(), s.end());
    return st.size() == s.size();
}

void solve() {
    int x; 
    cin >> x;
    for (int i = x + 1; ;i++) {
        if (distinct(i)) {
            cout << i << '\n';
            return;
        }
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}