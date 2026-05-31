#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    int vol = 0;
    bool play = false;
    while (q--) {
        int a;
        cin >> a;
        if (a == 1) {
            vol++;
        } else if (a == 2) {
            if (vol > 0) vol--;
        } else { 
            play = !play;
        }
        if (play && vol >= 3) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
