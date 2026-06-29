#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool isOdd(int n)
{
    return n % 2 != 0;
}
bool isBPalind(int n)
{
    string binary = "";
    if (n == 0)
        binary = "0";
    while (n > 0)
    {
        binary += (n % 2) + '0';
        n /= 2;
    }
    string revs = binary;
    reverse(revs.begin(), revs.end());
    return binary == revs;
}

void solve()
{
    int n;
    cin >> n;
    if (isOdd(n) && isBPalind(n))
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    // cin >> t;
    while (t--)
        solve();
}