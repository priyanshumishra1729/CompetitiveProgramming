#include<bits/stdc++.h>

using namespace std;

long long po(int x, int p) {
    long long res = 1; 
    for (int i = 1; i <= p; i++) {
        res *= x;
    }
    return res; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    long long ans = 0; 
    for (int i = 0; i <= n; i += 2) {
        if (i == 0) {
            ans += po(x, 0) - 1;
        } 
        else {
            ans += po(x, i); 
        }
    }
    cout << ans << '\n';
    return 0;
}