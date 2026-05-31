#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    1
    7
    push 3
    push 5
    pop
    front
    push 7
    pop
    pop

    3 
    5
    5
    7

    let's trace it-
    3
    5
    5
    7

*/

void solve() {
    int q;
    cin >> q;
    // Using 2 Stacks
    stack<int> s1, s2;
    while (q--) {
        string s;
        cin >> s;
        if (s == "push") {
            int x;
            cin >> x;
            s1.push(x);
        }
        else if (s == "pop") {
            if (!s2.empty()) {
                int ans = s2.top();
                s2.pop();
                cout << ans<< '\n';
            }
            else {
                while(!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
                int ans = s2.top();
                s2.pop();
                cout << ans << '\n';
            }
        }
        else if (s == "front") {
            if (!s2.empty()) {
                int ans = s2.top();
                cout << ans << '\n';
            }
            else {
                while(!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
                int ans = s2.top();
                cout << ans << '\n';
            }
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