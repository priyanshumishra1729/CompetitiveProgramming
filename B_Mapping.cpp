#include <bits/stdc++.h>

using namespace std;

using i64 = long long;
using u64 = unsigned long long;
using u32 = unsigned;

// void solve() {
//     // int n, m;
//     // cin >> n >> m;
//     // vector <int> person(n + 1);
//     // unordered_map <int, int> mp;
//     // for (int i = 1; i <= n; i++) cin >> person[i];
//     // for (int i = 1; i <= n; i++) {
//     //     mp[person[i]]++;
//     // }
//     // bool diff = true, contain = true;
//     // for (auto it : mp) {
//     //     if (it.second != 1) diff = false; 
//     // }

//     // sort(person.begin(), person.end());

//     // set <int> st;
//     // for (int i = 1; i <= n; i++) {
//     //     st.insert(person[i]); 
//     // }

//     // vector <int> nums(m + 1);

//     // for (int i = 1; i <= m; i++) {
//     //     nums.push_back(i);
//     // }

//     // sort(nums.begin(), nums.end());

//     // for (int i = 1; i <= nums.size(); i++) {
//     //     for (int j = 1; j <= person.size(); j++) {
//     //         if (person[j] != nums[i]) {
//     //             cout << "No\n";
//     //             return;
//     //         }
//     //     }
//     // }

//     // // for (auto it : st) {
//     // //     for (int j = 1; j <= m; j++) {
//     // //         if (it != j) contain = false;
//     // //     }
//     // // }

//     // // for (auto it : st) cout << it << " "; 
//     // // for Q1
//     // if (diff == true) cout << "Yes\n";
//     // else cout << "No\n";

//     // // for q2
//     // // if (contain == true) cout << "Yes\n";
//     // // else cout << "No\n";

//     int n, m;
//     cin >> n >> m;
//     unordered_map <int, int> mp;
//     vector <int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         mp[a[i]]++;
//     }
//     bool dist = true;
//     for (auto it : mp) {
//         if (it.second != 1) {
//             dist = false;
//         }
//     }
//     if (dist == true) cout << "Yes\n";
//     else cout << "No\n";

//     // lets see what can be done ? 
//     // construct a vector which store the nums from 1 to m
//     vector <int> type;
//     for (int i = 0; i < m; i++) {
//         type.push_back(i + 1);
//     }

//     for (auto x : type) cout << x << " ";

//     sort(a.begin(), a.end());

//     bool check = true;

//     set<int> st;
//     for (int i = 0; i < n; i++) {
//         st.insert(a[i]);
//     }

//     // for (int i = 0; i < m; i++) {
//     //     for (int j = i + 1; j <= n; j++) {
//     //         cout << type[i] << " " << a[j] << '\n';
//     //         if (type[i] == a[j]) check = true;
//     //     }
//     // }

//     for (auto it : st) cout << it << " ";

//     unordered_map <int, int> mpp;

//     for (int i = 0; i < m; i++) {
//         mp[type[i]]++;
//     }

//     for (auto it : st) {
//         for (auto x : type) {
//             if (x == it) check = false;
//         } 
//     }
//     if (check == false) cout << "No\n";
//     else cout << "Yes\n";
// }

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> st(a.begin(), a.end());
    if (st.size() == n) cout << "Yes\n";
    else cout << "No\n";
    bool cont = true;
    for (int i = 1; i <= m; i++) {
        if (!st.count(i)) {
            cont = false;
            break;
        }
    }
    if (cont) cout << "Yes\n";
    else cout << "No\n";
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