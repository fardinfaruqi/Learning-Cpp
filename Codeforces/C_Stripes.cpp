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

void solve()
{
    char a[8][8];
    int count = 0;
    bool f = false;
    for (int i = 0; i < 8; i++)
    {
        count = 0;
        for (ll j = 0; j < 8; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                count++;
            }
            if (count == 8)
                f = true;
        }
    }
    cout << (f ? 'R' : 'B') << endl;
    return;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}