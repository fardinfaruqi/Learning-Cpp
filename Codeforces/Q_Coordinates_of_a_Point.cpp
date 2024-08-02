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
    double x, y;
    cin >> x >> y;
    if (!x && !y)
        cout << "Origem";
    else if (!x)
        cout << "Eixo Y";
    else if (!y)
        cout << "Eixo X";
    else if (x > 0 && y > 0)
        cout << "Q1";
    else if (x < 0 && y > 0)
        cout << "Q2";
    else if (x < 0 && y < 0)
        cout << "Q3";
    else if (x > 0 && y < 0)
        cout << "Q4";
    cout << endl;
    return 0;
}