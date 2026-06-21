#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mxn = *max_element(a.begin(), a.end());
    int mn = *min_element(a.begin(), a.end());
    int maxP = 0;
    int minP = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mxn) {
            maxP = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == mn) {
            minP = i;
            break;
        }
    }
    int res = maxP + (n - 1 - minP);
    if (maxP > minP)
        res--;
    cout << res << endl;
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}