#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

bool isVowel(char ch) {
    return ch=='A'||ch=='E'||ch=='I'||ch=='O'
            ||ch=='U'||ch=='Y'; 
}

void solve() {
    string s;
    cin >> s;
    int n=s.size();
    int curr=0, l=0;
    for (char ch:s) {
        if (!isVowel(ch)) 
            curr++;
        else {
            l=max(l,curr);
            curr=0;
        }
    }
    l=max(l,curr);
    cout<<l+1<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/*
 * stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */