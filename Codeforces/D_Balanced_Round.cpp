#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        ll count = 1, count2 = 1;
        for (ll i = 0; i < n - 1; i++)
        {
            if (a[i] - a[i + 1] <= k)
            {
                count++;
            }
            else
            {
                count2 = max(count2, count);
                count = 1;
            }
        }
        count2 = max(count2, count);
        cout << n - count2 << endl;
    }
    return 0;
}