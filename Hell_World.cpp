#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n; 
    cin >> n; 
    string res = "HelloWorld";
    // for (int i = 1; i <= res.size(); i++) {
    //     res.erase(res[n]);
    // }
    res.erase(n - 1, 1);
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}