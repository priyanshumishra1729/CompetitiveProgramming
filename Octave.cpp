#include<bits/stdc++.h>
using namespace std;

using ll = long long;

/*
    2 = 1 octave 
    4 = 2 
    8 = 3
    16 = 4    
*/

int binpow(int a, int p) {
    if (p == 0) return 1; 
    if (p & 2 == 1) return binpow(a, p - 1) * a; 
    else {
        int temp = binpow(a, p / 2); 
        return temp * temp; 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    cout << x * pow(2, y) << '\n';
    return 0;
}