#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    unordered_map <long long, long long> mp;
    for (long long i = -200; i <= 200; i++) {
        mp[i * i * i * i * i] = i;
    }
    for (long long i = -200; i <= 200; i++) {
        long long a = i * i * i * i * i;
        if (mp.count(a - X)) {
            cout << i << " " << mp[a - X] << '\n';
            return 0;
        }
    }
}   