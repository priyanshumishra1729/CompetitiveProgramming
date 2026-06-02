#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    add x : add elem x at the top of pq 
    remove : delete top elem of pq, if pq != empty
    print : print elem at top of pq, if pq != empty 
    otherwise print 0 
*/

void solve() {
    int q;
    cin >> q;
    priority_queue<int> pq;
    while (q--) {
        string s;
        cin >> s;
        int x;
        if (s == "add") {
            cin >> x;
            pq.emplace(x);
        }
        else if (s == "remove") {
            if (!pq.empty()) {
                pq.pop();
            }
        }
        else {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
            }
            else {
                cout << 0 << '\n';
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