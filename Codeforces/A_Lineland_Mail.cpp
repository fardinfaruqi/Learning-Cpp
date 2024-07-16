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

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll cts[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> cts[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << abs(cts[i + 1] - cts[i]) << " " << abs(cts[n - 1] - cts[i]) << endl;
        }
        else if (i == n - 1)
        {
            cout << abs(cts[i] - cts[i - 1]) << " " << abs(cts[i] - cts[i - i]) << endl;
        }
        else
        {
            cout << (abs(cts[i] - cts[i - 1]) < abs(cts[i + 1] - cts[i]) ? abs(cts[i] - cts[i - 1])
                                                                         : abs(cts[i + 1] - cts[i]))
                 << " "
                 << (abs(cts[i] - cts[i - i]) < abs(cts[n - 1] - cts[i]) ? abs(cts[n - 1] - cts[i])
                                                                         : abs(cts[i] - cts[i - i]))
                 << endl;
        }
    }

    return 0;
}