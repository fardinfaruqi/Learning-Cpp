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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, s, f;
    while (cin >> l)
    {
        f = 1;
        bool b = true;
        while (l--)
        {
            cin >> s;
            if (s >= 20 && b)
            {
                f = 3;
                b = false;
            }
            else if (s >= 10 && b)
            {
                f = 2;
            }
        }
        cout << f << endl;
    }
    return 0;
}