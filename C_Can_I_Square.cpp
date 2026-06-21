#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int inf = 1e9;

// bool divisor(ll x) {
//     // O(logx)
//     for (int i = 1; i * i <= x; i++) {
//         if (x % i == 0) {
//             if (x / i == i) {
//                 return 1;
//             }
//         }
//     }
//     return 0;
// } 

// using divisor sieve 
// bool divisorSieve(int x) {
//     for (int i = 1; i * i < x; i++) {
//         for (int j = i * i; j < x; j += i) {
//             if (j % i == 0) {
//                 if (j / i == i) return 1;  // Avoid duplicate for perfect squares
//             }
//         }
//     }
//     return 0;
// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> a(n);
//     ll sum = 0;
//     // O(n)
//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//         sum += a[i];        // O(1)
//     }
//     // if (divisorSieve(sum)) {
//     //     cout << "YES\n";
//     // }
//     // else cout << "NO\n";

//     for (int i = 1; i <= sum; ++i) {
//         // The condition (number % i == 0) evaluates directly to a bool (true or false)
//         bool isDivisor = (sum % i == 0);
//         if (isDivisor) {
//             cout << "YES\n";
//             return;
//         }
//     }
//     cout << "NO\n";
// }

bool square(ll x) {
    ll l = 1, r = 1e9;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(mid * mid == x) return true;
        if(mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }      
    return false;  
}
void solve() {
    ll n; 
    cin >> n;
    ll sum = 0;
    for(int i = 0, x; i < n; ++i) {
        cin >> x; 
        sum += x;
    }
    if(square(sum)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}