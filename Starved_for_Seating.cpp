#include <bits/stdc++.h>
using namespace std;

/*
    n = 3 and k = 10 
    2 4 6     
    
    2 4 3 = 9
    2 2 6 = 10 
    1 4 6 = 11

*/

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int y = 2 * k - sum;
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] > y) res++;
        }
    }
    cout << res << '\n';
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}