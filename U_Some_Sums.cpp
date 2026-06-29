#include<bits/stdc++.h>

using namespace std;

int sumDigit(int n) {
    int sum = 0; 
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0; 
    for (int i = 1; i <= n; i++) {
        int sd = sumDigit(i); 
        if (sd >= a && sd <= b) {
            sum += i; 
        }
    }
    cout << sum << '\n';
    return 0;
}