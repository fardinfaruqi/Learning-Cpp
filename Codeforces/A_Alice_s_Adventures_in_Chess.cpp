#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n, a, b, x = 0, y = 0;
    string s;
    cin >> n >> a >> b >> s;
    ll len = s.length();
    bool t = true;
    while (true) {
        for (ll i = 0; i < len; i++) {
            if (s[i] == 'N')
                y++;
            else if (s[i] == 'S')
                y--;
            else if (s[i] == 'E')
                x++;
            else
                x--;
            if (x == a && y == b)
                break;
        }
        if (x == a && y == b) {
            break;
        } else if (x == 0 && y == 0) {
            t = false;
            break;
        } else if ((x <= a && x > 0) || (y <= b && y > 0)) {
            continue;
        } else if (abs(a - x) > len || abs(b - y) > len) {
            t = false;
            break;
        }
    }
    cout << (t ? "YES" : "NO") << '\n';
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