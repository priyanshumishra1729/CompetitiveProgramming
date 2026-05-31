#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    vector<long long> cnt(26, 0);
    long long ans = 0;
    for (int j = 0; j < n; j++) {
        if (j - l >= 0)
            cnt[s[j - l] - 'a']++;
        if (j - r - 1 >= 0)
            cnt[s[j - r - 1] - 'a']--;
        ans += cnt[s[j] - 'a'];
    }
    cout << ans << "\n";
}