#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXLIM = 1000000;   // sqrt(1e12) ~ 1e6
int isPrimeSmall[MAXLIM + 1];
int primeList[MAXLIM];
int primeCnt = 0;

void pre() {
    // normal sieve till sqrt(R)
    for (int i = 2; i <= MAXLIM; i++) isPrimeSmall[i] = 1;

    for (int i = 2; i * i <= MAXLIM; i++) {
        if (isPrimeSmall[i]) {
            for (int j = i * i; j <= MAXLIM; j += i)
                isPrimeSmall[j] = 0;
        }
    }

    // store primes
    for (int i = 2; i <= MAXLIM; i++) {
        if (isPrimeSmall[i])
            primeList[primeCnt++] = i;
    }
}

void solve() {
    int L, R;
    cin >> L >> R;

    int size = R - L + 1;
    bool isPrimeRange[size];

    // initially mark all as prime
    for (int i = 0; i < size; i++)
        isPrimeRange[i] = true;

    // segmented sieve
    for (int i = 0; i < primeCnt; i++) {
        int p = primeList[i];
        if (p * p > R) break;

        int start = max(p * p, ((L + p - 1) / p) * p);
        for (int j = start; j <= R; j += p)
            isPrimeRange[j - L] = false;
    }

    if (L == 1) isPrimeRange[0] = false;

    int cnt = 0;
    for (int i = 0; i < size; i++)
        if (isPrimeRange[i]) cnt++;

    cout << cnt << "\n";
    for (int i = 0; i < size; i++)
        if (isPrimeRange[i])
            cout << (i + L) << " ";
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    pre();
    solve();
    return 0;
}
