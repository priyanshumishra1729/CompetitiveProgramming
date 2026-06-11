#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

//  3 players and 7 cards
// 1 -> 7, 2 -> 6, 3 -> 5
// 1 -> 2, 2 -> 3, 3 -> 4
// 1 -> 1
// 7 + 2 + 1 = 10 
// 5 players and 3 cards
// 1 -> 3, 2 -> 2, 3 -> 1
// 5 players and 5 cards 
// 1 -> 5, 2 -> 4, 3 -> 3, 4 -> 2, 5 -> 1
// 6 players and 20 cards 
// 1 -> 20, 2 -> 19, 3 -> 18, 4 -> 17, . . . . . 6 -> 15
// 1 -> 1 , 9 10 11 12 13 14
// 1 -> 8 7 6 5 4 3
// 1 -> 2, 2 -> 1


// 1 2 3 -> 7 6 5
// 3 2 1 -> 4 3 2
// 1 -> 1

// 4 and 8 cards
// 1 2 3 4 -> 8 7 6 5
// 4 3 2 1 -> 4 3 2 1

// 6 20 
// 1 2 3 4 5 6 -> 20 19 18 17 16 15
// 6 5 4 3 2 1 -> 14 13 12 11 10 9
// 1 2 3 4 5 6 -> 8 7 6 5 4 3

// 20 19 18 . . . 
// 9 10 11 . . . 
// 8 7 6 . . . 

// 6 5 -> 2 1 
// 1 -> 37
// 2 -> 37
// 3 -> 35
// 4 -> 34
// 5 -> 35
// 6 -> 34
 
// void solve() {
//     int n, k;
//     cin >> n >> k;
//     // if players and cards are equal 
//     if (n == k) {
//         cout << n << '\n';
//         return;
//     }    
//     vector<int> nums(k);
//     // I guess the expected T.C should be O(n^2 logn) somthing like it 
//     // so I think sorting could be the approach 
//     for (int i = 1; i <= k; i++) {
//         nums.push_back(i);   
//     }
//     // nlogn 
//     sort(nums.begin(), nums.end());
//     // I am having an instinct that It should involve some kind of Permutation & Combination
//     // or any counting methods or contribution technique 
    
// }

void solve() {
    int n, k;
    cin >> n >> k;  
    vector<long long> strength(n + 1, 0); 
    // strength = 0 
    int player = 1;
    int dir = 1;
    for (int card = k; card >= 1; card--) {
        strength[player] += card;
        if (n > 1) {
            if (dir == 1) {
                if (player == n) {
                    dir = -1;
                }
                else {
                    player++;
                }
            }
            else {
                if (player == 1) dir = 1;
                else player--;
            }
        }
    }
    cout << *max_element(strength.begin(), strength.end()) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    
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