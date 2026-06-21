#include <bits/stdc++.h>
using namespace std;

// curr score is a 
// >= w for win
// instant increase by b points 
// if alice can win or not ? 

void solve() {
    int a, b, w;
    cin >> a >> b >> w;
    if (a + b >= w) {
        cout << "True\n";
    }
    else {
        cout << "False\n";
    }
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}