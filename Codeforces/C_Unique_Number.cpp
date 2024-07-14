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
    int x, count = 0, num = 0;
    bool f = false;
    cin >> x;
    for (int i = 0, a = 1; i < 10; i++, a *= 10)
    {
        for (int j = 0; j < 10 - i; j++)
        {
            if (count < x && count + j == x)
            {
                count += j;
                num += j * a;
            }
            else if (count < x && j == 9 - i)
            {
                count += j;
                num += j * a;
            }
        }
        if (count == x)
        {
            f = true;
            break;
        }
    }
    cout << (count == x ? num : -1) << endl;
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