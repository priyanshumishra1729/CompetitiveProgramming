#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
    int n; 
    cin >> n;
    // vector<string> s(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> s[i];
    // }
    // for (char ch : s[0]) {
    //         if (ch == 'a' || ch == 'b' || ch == 'c') {
    //             cout << 2;
    //         }
    //         if (ch == 'd' || ch == 'e' || ch == 'f') {
    //             cout << 3;
    //         }
    //         if (ch == 'g' || ch == 'h' || ch == 'i') {
    //             cout << 4;
    //         }
    //         if (ch == 'j' || ch == 'k' || ch == 'l') {
    //             cout <<  5;
    //         }
    //         if (ch == 'm' || ch == 'n' || ch == 'o') {
    //             cout << 6;
    //         }
    //         if (ch == 'p' || ch == 'q' || ch == 'r' || ch == 's') {
    //             cout << 7;
    //         }
    //         if (ch == 't' || ch == 'u' || ch == 'v') {
    //             cout << 8;
    //         }
    //         if (ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z') {
    //             cout << 9;
    //         }
    //     }

    string s, res = "";
    for (int i = 0; i < n; i++) {
        cin >> s;
        char c = s[0];
        if (c >= 'a' && c <= 'c') res += '2';
        else if (c >= 'd' && c <= 'f') res += '3';
        else if (c >= 'g' && c <= 'i') res += '4';
        else if (c >= 'j' && c <= 'l') res += '5';
        else if (c >= 'm' && c <= 'o') res += '6';
        else if (c >= 'p' && c <= 's') res += '7';
        else if (c >= 't' && c <= 'v') res += '8';
        else res += '9';
    }
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}