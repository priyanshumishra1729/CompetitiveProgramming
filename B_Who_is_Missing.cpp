#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;

/*
    sort the ai
    put vals from 1 to n in a vec container     
    then check if it equals 
    if not, then apply missing no logic
    and output all the missing no, if any. 
*/

void solve() {
  int n,m;
  cin >> n >> m;
  vector<int> b(n + 1, 0);
  for(int i = 0; i < m; i++){
    int a;
    cin >> a;
    b[a] = 1;
  }
  vector<int> ans;
  for(int i = 1; i <= n; i++){
    if(b[i] == 0){
      ans.push_back(i);
    }
  }
  cout << ans.size() << "\n";
  for(int i = 0; i < ans.size();i++){
    if (i) {
        cout << " ";
    }
    cout << ans[i];
  }
  cout << "\n";
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */