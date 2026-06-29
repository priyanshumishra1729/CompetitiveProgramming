#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n,m; 
    cin >> n >> m; 
    vector<string> a(n);
    for (int i=0; i<n; ++i) 
        cin >> a[i];
    int x,y;
    cin >> x >> y;
    x--; y--;
    int dx[]={-1,-1,-1,0,0,1,1,1};
    int dy[]={-1,0,1,-1,1,-1,0,1};
    for (int i=0; i<8; ++i) {
        int px=x+dx[i]; 
        int py=y+dy[i];
        if (px>=0&&px<n&&py>=0&&py<m) {
            if (a[px][py]!='x') {
                cout << "no\n";
                return;
            }
        }
    } 
    cout << "yes\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}