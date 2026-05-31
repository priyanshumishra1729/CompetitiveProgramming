#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, q;
    cin >> H >> W >> q;
    int h = H, w = W;
    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int R;
            cin >> R;
            cout << R * w << endl;
            h -= R;
        } 
        else {
            int c;
            cin >> c;
            cout << c * h << endl;
            w -= c;
        }
    }

    return 0;
}