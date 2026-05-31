#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    add x y
    print x
    erase x

    1
    5
add alice 24
add bob 21
print alice
erase alice
print alice

    24
    0
    we have to print the marks of student name x and 
    if not exist then print 0
*/

void solve() {
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--) {
        string s;
        cin >> s;
        if (s == "add") {
            string x;
            cin >> x;
            int y;
            cin >> y;
            mp[x] = y;
        }
        else if (s == "erase") {
            string x;
            cin >> x;
            if (mp.find(x) != mp.end()) {
                mp.erase(x);
            }
        }
        else {
            string x;
            cin >> x;
            if (mp.count(x)) cout << mp[x] << '\n';
            else cout << 0 << '\n';
        }
    }
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