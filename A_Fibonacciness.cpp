#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    vector <int> a(4);
    for (auto &x : a) cin >> x;
    set <ll> st;
    st.insert(a[3] - a[2]);
    st.insert(a[2] - a[1]);
    st.insert(a[0] + a[1]);
    cout << 4 - st.size() << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
}