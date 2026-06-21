#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b, c;
    cin >> a >> b >> c;
    int cnta1 = 0, cnta2 = 0, cnta3 = 0, cntb1 = 0, cntb2 = 0, cntb3 = 0, cntc1 = 0, cntc2 = 0, cntc3 = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] == 'A') cnta1++;
        else if (a[i] == 'B') cnta2++;
        else cnta3++;
    }
    for (int i = 0; i < 3; i++) {
        if (b[i] == 'A') cntb1++;
        else if (b[i] == 'B') cntb2++;
        else cntb3++;
    }
    for (int i = 0; i < 3; i++) {
        if (c[i] == 'A') cntc1++;
        else if (c[i] == 'B') cntc2++;
        else cntc3++;
    }
    if (cnta1 == 0) cout << "A" << '\n';
    else if (cnta2 == 0) cout << "B" << '\n';
    else if (cnta3 == 0) cout << "C" << '\n';
    else if (cntb1 == 0) cout << "A\n";
    else if (cntb2 == 0) cout << "B\n";
    else if (cntb3 == 0) cout  << "C\n";
    else if (cntc1 == 0) cout << "A\n";
    else if (cntc2 == 0) cout << "B\n";
    else {
        cout << "C\n";
    }
} 

int main() {
    int T = 1;
    cin >> T;
    while(T--) solve();
}