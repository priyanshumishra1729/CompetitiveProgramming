#include <bits/stdc++.h>
using namespace std;
#define int long long
int m = 1e9 + 7;

// int binpow(int a, int p) {
//     if (p == 0) return 1;
//     if (p % 2 == 1) return (binpow(a, p - 1) * a);
//     else {
//         int temp = binpow(a, p / 2);
//         return (temp * temp);
//     }
// }

int sumofSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

void Solve() {
    int n;
    cin >> n;
    // using cycle shortcut method, but for interview, use set-based-> it's in the bottom of the code
    while (n != 1 && n != 4) {
        n = sumofSquares(n);
    }
    if (n == 1) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. '
    Realizing that is also part of training.
*/


// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// int m = 1e9 + 7;

// int sumOfSquares(int n) {
//     int sum = 0;
//     while (n > 0) {
//         int d = n % 10;
//         sum += d * d;
//         n /= 10;
//     }
//     return sum;
// }

// // set-based method
// void Solve() {
//     int n;
//     cin >> n;

//     unordered_set<int> seen;

//     while (n != 1) {
//         if (seen.count(n)) {
//             cout << "No\n";
//             return;
//         }
//         seen.insert(n);
//         n = sumOfSquares(n);
//     }

//     cout << "Yes\n";
// }

// int32_t main() {
//     ios::sync_with_stdio(0);
//     cin.tie(nullptr);
//     Solve();
//     return 0;
// }

// /* 
//     Growth occurs when one goes beyond one's limits. 
//     Realizing that is also part of training.
// */
