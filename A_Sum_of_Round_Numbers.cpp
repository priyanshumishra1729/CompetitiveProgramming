#include <bits/stdc++.h>
using namespace std;
#define int long long
int m = 1e9 + 7;

int binpow(int a, int p) {
    if (p == 0) return 1;
    if (p % 2 == 1) return (binpow(a, p - 1) * a);
    else {
        int temp = binpow(a, p / 2);
        return (temp * temp);
    }
}

/*
    5000 + 9
    9000 800 70 6
    10 ^ 3 10 ^ 2 10 ^ 1 10 ^ 0
    1000 100 10 1
    9 8 7 6
*/

void Solve() {
    int n;
    cin >> n;
    vector<int> res;
    int po = 1;
    while (n > 0) {
        if (n % 10 > 0) {
            res.push_back((n % 10) * po);
        }
        n /= 10;
        po *= 10;
    }
    cout << res.size() << '\n';
    for (auto num : res) {
        cout << num << " ";
    }
    cout << '\n';
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) Solve();
    return 0;
}

/* 
    Growth occurs when one goes beyond one's limits. 
    Realizing that is also part of training.
*/