#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

const int m = 1e9 + 7;

/*
    starting from x to m 
    then when we find the prime number then print it 
    and break it 
    how to make this for checking the next permutation 
    when we take n % i then what we should choose n 
    so that after it 
    let's try sieve of eratosthenes 
*/

bool isPrime(ll x) { 
    // O(sqrt(n))
    if (x < 2) return false;
    if (x % 2 == 0) return x == 2; 
    for (ll i = 3; i * i <= x; i += 2) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            if (i == m) {
                cout << "YES\n";
                return;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "NO\n";
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