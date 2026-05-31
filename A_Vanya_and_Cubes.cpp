#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int n; 

// 1 - 1
// 1 + 2 - 3
// 1 + 2 + 3 - 6
// 1 + 2 + 3 + 4 - 10
// 1 + 2 + 3 + 4 + 5 - 15

void solve() {
    cin >> n; 
    int cnt=0; 
    while((cnt+1)*(cnt+2)*(cnt+3)/6<=n) cnt++;
    cout << cnt << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}