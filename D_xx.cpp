#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

string pp(string s) {
    vector<char> st;
    for (char ch : s) {
        st.push_back(ch);
        while (st.size() >= 4) {
            int num = st.size();
            if (st[num-4] == '(' && st[num-3] == 'x' && st[num-2] == 'x' && st[num-1] == ')') {
                st.pop_back();
                st.pop_back();
                st.pop_back();
                st.pop_back();
                st.push_back('x');
                st.push_back('x');
            } else break;
        }
    }
    return string(st.begin(), st.end());
}

void solve() {
    string a, b;
    cin >> a >> b;
    if (pp(a) == pp(b)) cout << "Yes\n";
    else cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */