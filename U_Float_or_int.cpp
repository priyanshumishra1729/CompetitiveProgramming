#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    size_t po = s.find('.');
    string integerPart = s.substr(0, po);
    string fractionalPart = s.substr(po + 1);
    bool isIn = true;
    for (char ch : fractionalPart) {
        if (ch != '0') {
            isIn = false;
            break;
        }
    }
    if (isIn) {
        cout << "int " << integerPart << '\n';
    } else {
        cout << "float " << integerPart << " 0." << fractionalPart << '\n';
    }

}

int main() {
    int T = 1;
    // cin >> T;
    while(T--) solve();
}