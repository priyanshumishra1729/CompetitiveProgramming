#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> ans;

void divisor(ll x) {
    for (ll i=1; i*i<=x; ++i) {
        if (x%i==0) {
            ans.push_back(i);
            if (x/i!=i) ans.push_back(x/i); 
        } 
    }
} 

void solve() {
    int n,k;
    cin >> n >> k;
    divisor(n); 
    sort(ans.begin(),ans.end()); 
    if (ans.size()<k)  
        cout << -1 << '\n';
    else
        cout << ans[k-1] << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}