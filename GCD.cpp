#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int gcd(int a, int b) {
    if (b == 0) return a;
    else {
        return gcd(b, a % b); 
    }
}

void solve() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) solve();
}