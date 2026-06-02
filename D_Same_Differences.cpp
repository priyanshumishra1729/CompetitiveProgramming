#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    chcking if the vals satisfies the condn or not 
    if it's satifies the condn or not
    see if hashing works or not 
    
    i < j and a[j] - a[i] == j - i

    consider i < j, 
    a[j] - a[i] == j - i 

    1 3 3 4 -> 3 
*/

void solve() {
    int n; 
    cin >> n;
    map<int, int> mp;
    ll ans = 0;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        x-=i;
        ans+=mp[x];
        mp[x]++;
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */