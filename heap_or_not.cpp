#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using u64 = unsigned long long;
using u32 = unsigned;
#define pb push_back

/*
    containing heap elements
    binary heap is a complete binary tree 
    that satisfies the heap property     
    In a min-heap, value of every parent node is less than or equal
    to the values of it's children 
    binary tree in level order traversal 
    if it's represents min-heap or not ? 
*/

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int parent = (i - 1) / 2;
        if (a[parent] <= a[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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

 /*
    Two types of heaps: min-heap and max-heap
    min-heap: value of root-node is smallest -> true for all subtrees 
    binary heaps used in priority queues and heap sort algos
    because of efficient insertion and deletion operations 
 
    binary heap is complete binary tree 
 
    parent = (i - 1) / 2
    left = 2 * i + 1
    right = 2 * i + 2

    parent <= children -> minheap
    maxheap -> parent >= children 
 */