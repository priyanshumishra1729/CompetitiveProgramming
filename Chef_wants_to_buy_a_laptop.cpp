#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
#define pb push_back
#define mp make_pair
typedef vector<int> vi; 
typedef pair<int,int> pi; 

int x, y; 

void solve() {
    cin >> x >> y; 
    if (y>x) cout << 0 << '\n';
    else cout << x - y << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}