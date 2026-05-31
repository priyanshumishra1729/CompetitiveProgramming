#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (st.count(a[i] + 1)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}