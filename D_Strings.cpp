#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    string a,b;
    cin >> a >> b;
    //print the size of strings
    cout << a.size() << " " << b.size() << '\n';  
    // concatenated string
    cout << a + b << '\n';
    // string after swap(a[0],b[0])
    swap(a[0],b[0]);
    cout << a << " " << b << '\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}