#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    while (k--) {
        int key;
        cin >> key;
        int lo = 0, hi = n - 1; 
        bool ok = false;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2; 
            if (a[mid] == key) {
                ok = true;
                break; 
            }
            else if (a[mid] < key) {
                lo = mid + 1; 
            }
            else hi = mid - 1; 
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}