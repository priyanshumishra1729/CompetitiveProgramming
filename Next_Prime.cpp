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
    
    
    when finding the next prime only after x 
    then start from x + 1 if it's a prime or not 
    if it's a prime then print it else increment it 
*/

bool isPrime(ll n) { 
    // O(sqrt(n))
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }   
    return true;
}

void solve() {
    ll x;
    cin >> x;   
    ll ans = x + 1;
    while (!isPrime(ans)) ans++;
    cout << ans << '\n';
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