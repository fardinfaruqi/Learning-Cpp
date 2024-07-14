#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll n, _3 = 0, _2 = 0;
    cin >> n;
    while (n % 3 == 0)
    {
        n /= 3;
        _3++;
    }
    while (n % 2 == 0)
    {
        n /= 2;
        _2++;
    }
    if (n == 1 && _3 >= _2)
        cout << _3 + _3 - _2 << endl;
    else
        cout << -1 << endl;
    return;
}
int main(int argc, char const *argv[])
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}