#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, m;
    cin >> n >> m;
    ll n_pos = 1, p_first = 1, p_last = n;
    bool x = true, y = false, z = false;
    char a;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a;
            if (x && a == '#') {
                x = false;
                y = true;
                n_pos = j;
                p_first = i;
            }
            if (y && j == n_pos && a == '.') {
                y = false;
                p_last = i - 1;
            }
        }
    }
    cout << ceil((p_first + p_last) / 2.0) << " " << n_pos << endl;
    // cout << "--> " << p_first << " " << p_last << " " << n_pos << endl;
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