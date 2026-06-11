#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

const int N = 1e7;
bool isPrime[N + 1];

// O(NloglogN)
    // simple Sieve Code
    // void sieve() {
    //     for (int i = 2; i <= N; i++) {
    //         isPrime[i] = 1;
    //     }
    //     for (int i = 2; i <= N; i++) {
    //         if (isPrime[i]) {
    //             for (int j = 2 * i; j <= N; j += i) {
    //                 isPrime[i] = 0;    
    //             }
    //         }
    //     }
    // }

// OPtimized Sieve Code
vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = 2 * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve() {
    
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