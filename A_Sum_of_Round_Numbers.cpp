#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> ans;
    int multi = 1;
    while (n != 0) {
        int digit = n % 10;
        if (digit != 0)  ans.push_back(multi * digit);
        multi *= 10;
        n /= 10;
    }
    cout << ans.size() << '\n';
    for (auto it : ans) cout << it << " "; 
    cout << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}