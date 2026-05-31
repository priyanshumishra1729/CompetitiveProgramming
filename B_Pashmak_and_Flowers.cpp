#include <bits/stdc++.h>
using namespace std;
#define int long long
int m = 1e9 + 7;

// int binpow(int a, int p, int m) {
//     if (p == 0) return 1;
//     if (p % 2 == 1) return (binpow(a, p - 1, m) * a) % m;
//     else {
//         int temp = binpow(a, p / 2, m);
//         return (temp * temp) % m;
//     }
// }

void Solve() {  
    int n;
    cin >> n;
    int a[n];
    int maxi = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxi = max(maxi, a[i]);
        mini = min(mini, a[i]);
    }
    int t1 = 0, t2 = 0;
    for (int i = 0; i < n; i++) {
        t1 += (a[i] == mini);
        t2 += (a[i] == maxi);
    }
    cout << maxi - mini << " ";
    if (maxi == mini) {
        cout << n * (n - 1) / 2 ;
    }
    else {
        cout << t1 * t2;
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/