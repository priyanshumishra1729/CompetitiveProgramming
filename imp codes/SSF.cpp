#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;
using u32 = unsigned;

void solve() {
    // finding the min, last index of the min element, first index of the min element, Freq of the min element 
    // int n;
    // cin >> n;
    // vector<int> a(n);
    // int mn = INT_MAX, fst = 0, lst = -1, f = 0;
    // for (int i = 0; i < n; i++) {
    //     cin >> n;
    //     if (mn > a[i]) {
    //         mn = a[i];
    //         fst = i;
    //         lst = i;
    //         f = 1;
    //     }
    //     else {
    //         lst = i;
    //         f++;
    //     }
    // }
    // cout << "Min of the arr: " << mn << '\n';
    // cout << "first Index of the element is: " << fst << '\n';
    // cout << "Last Index of the element is: " << lst << '\n';
    // cout << "Freq of the min element is: " << f << '\n';


    // sorting the array using inbuit sort function 
    // int n;
    // cin >> n;
    // int a[n];
    // for (int i = 0; i < n; i++) cin >> a[i];
    // sort(a, a + n);          // O(nlogn)   ->> introsort => quick sort + heap sort + insertion sort 
    // for (int i = 0; i < n; i++) cout << a[i] << " ";


    // Implementing the Counting Sort Function 
    // this is valid for n < 10^6 so it's for smaller values and n numbers 
    // int n;
    // cin >> n;
    // vector<int> a(n);

    // // creating a freq array having n + 1 elements
    // // if there are 5 elements then 5 + 1 = 6
    
    // int freq[6];
    
    // // memset(freq, -1, sizeof(freq));    // works for 0 or -1 only.   is a func which fills array with 0 or -1. 

    // for (int i = 0; i < 6; i++) freq[i] = 0;

    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    //     freq[a[i]]++;
    // }
    // int last = 0;
    // for (int i = 1; i <= 6; i++) {
    //     while (freq[i] > 0) {
    //         a[last] = i;
    //         last++;
    //         freq[i]--;
    //     }
    // }
    // for (int i = 0; i < n; i++) cout << a[i] << " ";


    // problem : check if the whether they are anagrams or not 
    // s = 'abcdaba'   t = 'cbdaaab'   o/p = true

    // string s, t;
    // cin >> s >> t;

    // // method 1 : sort both and then compare it 
    // sort(s.begin(), s.end());
    // sort(t.begin(), t.end());

    // if (s == t) cout << "True\n";
    // else cout << "False\n";


    // // method 2 : build the freq array of one and then ... 
    // int freq[26];
    // memset(freq, 0, sizeof(freq));
    // for (    int i = 0; i < s.size(); i++) freq[s[i] - 'a']++;
    // for (int i = 0; i < t.size(); i++) freq[t[i] - 'a']--;
    
    // bool is_anagram = true;
    
    // for (int i = 0; i < 26; i++) {
    //     if (freq[i] != 0) is_anagram = false;
    // }

    // if (is_anagram) cout << "True\n";
    // else cout << "False\n";


    // Problem: check if the string is Palindrome or not so building the freq table . Observation is that the palindrome has elem in pairs i.e 2 even
    // and one odd should be in the middle  ---> so it means if we have greater than one odd elem then it's not a palindrome 

    // string s;
    // cin >> s;
    // int freq[26];
    // memset(freq, 0, sizeof(freq));
    // for (int i = 0; i < s.size(); i++) freq[s[i] - 'a']++;

    // int odd_found = 0;
    // for (int i = 0; i < 26; i++) {
    //     if (freq[i] % 2 == 1) odd_found++;
    // }
    // if (odd_found > 1) cout << "NO\n";
    // else cout << "YES\n";



    // Problem: Find the no of pairs (i, j) such that a[i] == a[j], i < j
    // constraints: n <= 10^5   a[i] <= 10^5

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */