#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve(ll n)
{
    ll sqr[n][n];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i, k=1; j < n; j++, k++)
        {
            sqr[i][j] = k;
        }
        for (ll j = 0, k = i+1; j < i; j++, k--)
        {
            sqr[i][j] = k;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (j == 0)
                printf("%3d", sqr[i][j]);
            else
                printf(" %3d", sqr[i][j]);
        }
        cout << endl;
    }
    cout << endl;
    return;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll n;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        solve(n);
    }
    return 0;
}