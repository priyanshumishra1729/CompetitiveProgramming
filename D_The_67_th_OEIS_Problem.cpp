#include <bits/stdc++.h>
using namespace std;

using i64 = long long;

vector<int> primes;

void sieve(int n = 200000) {
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < n; j += i)
                is_prime[j] = false;
        }
    }
}

void solve() {
    int n;
    cin >> n;

    cout << 1 << ' ';  // 🔥 fix

    for (int i = 0; i < n - 1; i++) {
        cout << 1LL * primes[i] * primes[i + 1] << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sieve();

    int t;
    cin >> t;
    while (t--) solve();
}