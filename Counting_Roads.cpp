#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N, M;
    cin >> N >> M;
    vector<int> d(N, 0);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        d[A]++;
        d[B]++;
    }
    for (int i = 0; i < N; i++) cout << d[i] << '\n';
}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}