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
    ll n, m, a, result, n_md = 0, m_md = 0;
    cin >> n >> m >> a;
    n_md = n % a;
    m_md = m % a;
    if (n_md && m_md)
        result = ((n / a) * (m / a)) + (ceil(double(m) / a)) + (ceil(double(n) / a)) - 1;
    else if (n_md)
        result = ((n / a) * (m / a)) + (ceil(double(m) / a));
    else if (m_md)
        result = ((n / a) * (m / a)) + (ceil(double(n) / a));
    else
        result = (n * m) / (a * a);
    cout << result << endl;
    return 0;
}