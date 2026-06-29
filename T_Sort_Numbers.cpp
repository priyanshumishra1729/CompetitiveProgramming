#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    vector<int> A(3); 
    for (int i = 0; i < 3; i++) cin >> A[i];
    vector<int> dup(A.begin(), A.end()); 
    sort(A.begin(), A.end());  
    for (int i = 0; i < 3; i++) cout << A[i] << '\n';
    cout << '\n';
    for (int i = 0; i < 3; i++) cout << dup[i] << '\n'; 
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}