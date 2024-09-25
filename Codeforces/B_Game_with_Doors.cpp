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

void solve() {
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    ll s[4] = { a, b, x, y };
    for (ll i = 0; i < 4; i++) {
        for (ll j = i + 1; j < 4; j++) {
            if (s[i] > s[j]) {
                swap(s[i], s[j]);
            }
        }
    }
    // cout << s[0] << s[1] << s[2] << s[3] << endl;
    if ((s[0] == a && s[1] == x) || (s[0] == x && s[1] == a)) {
        if (s[0] == s[1] && s[2] == s[3])
            cout << s[2] - s[1] << endl;
        else if (s[0] == s[1] || s[2] == s[3])
            cout << s[2] - s[1] + 1 << endl;
        else
            cout << s[2] - s[1] + 2 << endl;
    } else
        cout << 1 << endl;
    return;
}
int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}