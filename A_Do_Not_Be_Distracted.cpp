#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    ABA  = NO
    FFGZZZY = YES
    DDBBCCCBBEZ = NO
    using the brute-force approach 
    like if s[i] == s[i + 1] else  

    implementation Idea: 
    for every value x
{
    find first occurrence of x
    find last occurrence of x

    check every position between them

    if something != x
        return NO
}
return YES
*/

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (char ch = 'A'; ch <= 'Z'; ch++) {
        int f = n;
        int l = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == ch) {
                f = min(f, i);
                l = max(l, i);
            }
        }
        for (int i = f; i <= l; i++) {
            if (s[i] != ch) {
                cout << "NO\n";
                return;
            }
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