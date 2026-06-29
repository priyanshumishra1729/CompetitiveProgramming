#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<int> ans; 

// calculating the divisors
void divisors(int x) {
    for (int i=1; i*i<=x; ++i) {
        if (x%i==0) {
            ans.push_back(i);
            if (x / i != i) ans.push_back(x/i); 
        }
    } 
}

void solve() {
    int n; 
    cin >> n;
    divisors(n);
    sort(ans.begin(),ans.end());
    for (auto it:ans) {
        cout << it << '\n';
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