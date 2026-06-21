#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

// I see an observation-1 : that if count of zeroes == k then the string can be converted to all zeroes 
// but it's failing on 2nd testcase 
// now what ? 
// observation-2 : s[i] = 1 and s[i + 1] = 0 or s[i] = 0 and s[i + 1] = 1
// observation-3 : we should have atleast 1 zero to have the possibilty to make all zeroes 

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < k; i++) {
        int one = 0;
        for (int j = i; j < n; j += k) {
            if (s[j] == '1') one++;
        }
        if (one & 1) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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