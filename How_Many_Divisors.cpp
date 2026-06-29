#include <bits/stdc++.h>
using namespace std;

#define ll long long

int divisors(int x, int y, int z) {
    int cnt=0; 
    for (int i=1; i*i<=z; ++i) {
        if (z%i==0) {
            if (i>=x&&i<=y) cnt++;
            if (i!=z/i&&z/i>=x&&z/i<=y) cnt++; 
        }
    }   
    return cnt; 
}

void solve() {
    int a,b,c;
    cin >> a >> b >> c;
    int ans=divisors(a,b,c); 
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