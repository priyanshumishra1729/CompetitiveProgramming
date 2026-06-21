#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N; 
    cin >> N;
    vector<int> f(101, 0);
    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        f[X]++;
    }
    for (int i = 1; i <= 100; i++) {
        if (f[i] > f[i - 1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) solve(); 
}