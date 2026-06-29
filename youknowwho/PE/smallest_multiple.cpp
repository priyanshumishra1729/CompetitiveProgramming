#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int inf=1e9; 

int lcm(int a, int b) {
    return (a/__gcd(a,b)) * b; 
}

void solve() {  
    int ans = 1;
    for (int i=1; i<=20; ++i) ans=lcm(ans,i);
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}