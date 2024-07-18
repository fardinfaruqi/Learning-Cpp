#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
typedef long long int ll;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, sum;
    while (true)
    {
        cin >> a >> b;
        if (a <= 0 || b <= 0)
            break;
        sum = a + b;
        a = min(a, b);
        b = sum - a;
        sum = ((b - a + 1) / 2.0) * (a + b);
        for (ll i = a; i <= b; i++)
        {
            cout << i << " ";
        }
        cout << "sum =" << sum << endl;
    }
    return 0;
}