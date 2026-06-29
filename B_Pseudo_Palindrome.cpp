#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n; 
    cin >> n; 
    ll d;       
    cin >> d;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end()); 
    for (int i = 0; i + 1 < n; i+=2) {
        if (a[i + 1] - a[i] > d) {
            cout << "NO\n";
            return; 
        }
    }
    cout << "YES\n"; 
} 

int main() {
    int T;
    cin >> T;
    while (T--) solve();
    return 0; 
}