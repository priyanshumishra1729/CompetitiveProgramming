#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// first to find out if the dist betn n ad m is 2 
// if dist = 2 then we find if the m is a prime or not 
// if n is even then it will give even no 
// if n is odd then it will give odd 
// if n is prime then i twill give odd no 

bool isPrime(int x) {
    bool prime = true;
    for (int i = 2; i <= x - 1; i++) {
        if (x % i == 0) {
            prime = false;
            break;
        } 
    }
    return prime;
}

void solve() {
    int n, m; cin >> n >> m;    
    int dist = m - n;
    if (dist == 2) {
        if (isPrime(n)) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
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