#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,m;
    int sum=0; 
    while(cin>>n&&cin>>m) {
        if (n<=0||m<=0) break;
        if (n>m)
            swap(n,m);
        for (int i=n; i<=m; i++) {
            cout << i << " ";
            sum+=i;  
        }
        cout << "sum =" << sum << '\n';
        sum=0; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}       