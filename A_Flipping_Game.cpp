#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < N; i++) {
        // choose right end 
        for (int j = i; j < N; j++) {
            int count = 0;
            for (int k = 0; k < N; k++) {
                if (i <= k && k <= j) {
                    count += (1 - a[k]);
                }
                else count += a[k];
            }
            ans = max(ans, count);
        }
    }
    cout << ans << '\n';
}