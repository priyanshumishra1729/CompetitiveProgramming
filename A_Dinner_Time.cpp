#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

/*
    a1 + a2 + . . . + an = m 
    
    sum of every p consecutive elem = q 

    we can add the nums and then see if it gives

    the sum equals to q
*/

void solve() {
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n % p == 0 && (n / p) * q != m) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while(t--) solve();
}