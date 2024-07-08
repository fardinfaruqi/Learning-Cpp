#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll a2 = b - (c - b), b2 = a + (c - a) / 2, c2 = a + (b - a) * 2;
    if (a2 >= a && a2 % a == 0 && a2 != 0) {
        cout << "YES" << endl;
    } else if (b2 >= b && b2 % b == 0 && b2 != 0 && (a - c) % 2 == 0) {
        cout << "YES" << endl;
    } else if (c2 >= c && c2 % c == 0 && c2 != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return;
}
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}