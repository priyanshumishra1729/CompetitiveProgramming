#include <bits/stdc++.h>
using namespace std;

/*
    3 2 
    1 2 3 
    3 1 
    9 9 9 
*/

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    if (is_sorted(arr, arr + n) || k > 1) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
}

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}