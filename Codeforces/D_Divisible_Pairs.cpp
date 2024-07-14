#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll n, x, y, c = 0;
    cin >> n >> x >> y;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0)
            {
                c++;
            }
        }
    }
    cout << c << endl;
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