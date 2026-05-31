#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    int cnt = 0, curr = 0;
    for (auto &x : a) cin >> x;
    int res = INT_MAX;
    for (int x : a) {
        int cnt = 0;
        while (x % 2 == 0) {
            x /= 2;
            cnt++;
        }
        res = min(res, cnt);
    }
    cout << res << '\n';
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
I bow to Lord Shiva.

कर्मणि-निर्धारित कर्म में; एव केवल; अधिकारः-अधिकार; ते तुम्हारा; मा-नहीं; फलेषु कर्मफल में; 
कदाचन-किसी भी समय; मा कभी नहीं; कर्म-फल-कर्म के परिणामस्वरूप फल; 
हेतुः-कारण; भू:-होना; मा-नहीं; ते तुम्हारी; सङ्गः-आसक्ति; अस्तु-हो; अकर्मणि-अकर्मा रहने में।

translated as:

You have a right to perform your prescribed duties, 
but you are not entitled to the fruits of your actions. 
Never consider yourself the cause of the results, and 
never be attached to not doing your duty.
*/