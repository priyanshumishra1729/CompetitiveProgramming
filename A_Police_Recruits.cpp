#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        sum+=a[i];
    }
    // first, when talking about even numbers then just make it positive
    if (sum % 2 == 0) cout << abs(sum) << '\n';

    //  if the value is -ve and it's odd number then just do the pos + 1

    // if it's odd and it's +ve then don't do anything just make it pos
    // now taking the odd case and then inside the odd case if-else conditon for the +ve and -ve number
    if (sum % 2 != 0) {
        if (sum > 0) {
            cout << abs(sum) << '\n';
        }
        else {
            cout << abs(sum) + 1 << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
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