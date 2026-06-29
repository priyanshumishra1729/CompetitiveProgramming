#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    // using two loops but it will be like O(n2) 
    string s,t;
    cin >> s >> t;
    string ans="";  
    for (int i=0; i<min(s.size(),t.size()); ++i) {
        ans.push_back(s[i]);
        ans.push_back(t[i]); 
    }
    if (s.size()!=t.size()) {
        if (s.size()>t.size()) {
            for (int i=t.size(); i<s.size(); ++i) 
                ans.push_back(s[i]);
        }
        else {
            for (int i=s.size(); i<t.size(); ++i) 
                ans.push_back(t[i]);
        }
    }
    cout <<  ans; 
    cout << '\n';
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}