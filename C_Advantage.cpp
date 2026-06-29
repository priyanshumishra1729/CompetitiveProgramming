#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <climits>
using namespace std;

using ll = long long;
using db = long double;
using str = string;

// pairs
using pi = pair<int,int>;
using pl = pair<ll,ll>;
using pd = pair<db,db>;
#define mp make_pair
#define f first
#define s second

// vectors
#define sz(x) int(size(x))
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define rep(a) F0R(_,a)
#define each(a,x) for (auto& a: x)

void solve(int tc) {
    // ll N;
    // cin >> N;
    // vector<ll> A(N);
    // F0R(i, N) {
    //     cin >> A[i];
    // }
    // ll l = INT_MIN, sl = INT_MIN;
    // F0R(i, N) {
    //     if (A[i] > l) {
    //         sl = l; 
    //         l = A[i];  
    //     }
    //     else if (A[i] > sl && A[i] < l) {
    //         sl = A[i]; 
    //     }
    // }
    
    // vector<ll> ANS;
    // F0R(i, N) {
    //     if (A[i] != l) {
    //         ll P = A[i] - l; 
    //         ANS.pb(P); 
    //     }
    //     else if (A[i] == l) {
    //         ll Q = l - sl; 
    //         ANS.pb(Q); 
    //     }
    // }
    // for (auto &X : ANS) cout << X << " "; 
    // cout << endl;
     int N;
    cin >> N;

    vector<ll> A(N);

    for (int i = 0; i < N; i++)
        cin >> A[i];

    ll mx = *max_element(A.begin(), A.end());

    int cnt = 0;
    for (ll x : A)
        if (x == mx)
            cnt++;

    ll secondMax = LLONG_MIN;
    for (ll x : A) {
        if (x != mx)
            secondMax = max(secondMax, x);
    }

    for (ll x : A) {
        if (x == mx) {
            if (cnt > 1)
                cout << 0 << " ";
            else
                cout << mx - secondMax << " ";
        } else {
            cout << x - mx << " ";
        }
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    FOR(i,1,tc+1) solve(i);
}

/*
 * int overflow
 * array bounds
 * special cases (n = 1?)
 * stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */