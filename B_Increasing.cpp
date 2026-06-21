#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }
    if (st.size() == n) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}
 
int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}