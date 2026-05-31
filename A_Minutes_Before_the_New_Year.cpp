#include <bits/stdc++.h>
using namespace std;
#define int long long
const int M = 1e9 + 7;

/*
    4 3
    1 2 3 4
    
    4
    
    three points on the line 
    1st point : 1 
    2nd point : 2
    3rd point : 3
        
    3 - 1 = 2 and 3 - 2 = 1
*/

// bool check(vector<int> a, int mid, int d) {
//     if (a[mid+1] - a[mid] <= d) return 1;
//     return 0; 
// }

/*
    5
    23 55
    23 0
    0 1 
    4 20
    23 59
    
    conditions: 
    h = 23 and m = 0 ====> (24 - 23)*60 -> (24 - h) * 60
    
    h = 23 and m = 40 ====> (60 - 40)  -> 20 mins
    
    
        
    20 55    
    24 - 20 = 4  and 60 - 55 = 5
    4 * 60 + 5 =   245 mins  
*/

void solve() {
    int h, m; cin >> h >> m;
    cout << 1440 - 60*h - m << '\n';
}

int32_t main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);
	int t = 1; cin >> t;
	while (t--) solve();
	return 0;
}
