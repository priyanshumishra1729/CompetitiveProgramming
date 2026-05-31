#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inf (int)1e18

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve() 
{
    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N, 0));

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            cin >> A[i][j];
            A[j][i] = A[i][j];
        }
    }

    int edges = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {

            bool is_edge = true;

            for (int k = 0; k < N; k++) {
                if (k == i || k == j) continue;

                if (A[i][j] > A[i][k] + A[k][j]) {
                    cout << "No\n";
                    return;
                }

                if (A[i][j] == A[i][k] + A[k][j]) {
                    is_edge = false;
                }
            }

            if (is_edge) edges++;
        }
    }

    if (edges == N - 1) cout << "Yes\n";
    else cout << "No\n";
}

int32_t main() 
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // freopen("in",  "r", stdin);
    // freopen("out", "w", stdout);
    
    // cin >> t;
    for(int i = 1; i <= t; i++) 
    {
        // cout << "Case #" << i << ": ";
        Solve();
    }
    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n"; 
    return 0;
}