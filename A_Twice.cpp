#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n; ++i) cin >> a[i];
    // int score=0; 
    // vector<int> f(n+1,0);
    // for (auto it:a) f[it]++;
    // for (int i=0; i<=n; ++i) {
    //     score+=f[i]/2;
    // }
    // cout << score << '\n';

    vector<bool> used(n, false);
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (used[i]) continue;
        for (int j = i + 1; j < n; j++) {
            if (!used[j] && a[i] == a[j]) {
                score++;
                used[i] = used[j] = true;
                break; 
            }
        }
    }   
    cout << score << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}