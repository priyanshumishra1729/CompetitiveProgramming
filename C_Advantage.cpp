#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
int n;
int mxn = INT_MIN;

void solve() {
    vector<int> a(n);
    vector<int> b(a);
    cin >> n; 
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        mxn = max(mxn, a[i]);   
    }
    sort(b.begin(), b.end());
    for (int i=0; i<n; i++) {
        if (a[i]==b[n-1]) {
            cout << a[i] - b[n-2] << " ";
        }
        else {
            cout << a[i] - b[n - 1] << " "; 
        }
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    cin >> t;
    while(t--)
        solve();
}