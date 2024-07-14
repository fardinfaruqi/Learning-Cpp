#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll x, n, m;
    cin >> x >> n >> m;
    bool f = false;
    while (true)
    {
        if (x > 18 && n > 0)
        {
            x = (x / 2) + 10;
            n--;
        }
        else if (m > 0)
        {
            x -= 10;
            m--;
        }
        else if (n > 0)
        {
            x = (x / 2) + 10;
            n--;
        }
        if (x <= 0)
        {
            f = true;
            break;
        }
        if (n == 0 && m == 0)
        {
            break;
        }
    }
    cout << (f ? "YES" : "NO") << endl;
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