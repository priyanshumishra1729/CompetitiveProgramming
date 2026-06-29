#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    int mx = INT_MIN;
    vector<int> score; 
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int sum = a + b;
        score.push_back(sum);  
    }
    int pos = 0; 
    for (int i = 0; i < (int)score.size(); i++) {
        if (mx < score[i]) {
            mx = score[i]; 
            pos = i; 
        } 
    }
    cout << pos + 1 << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}