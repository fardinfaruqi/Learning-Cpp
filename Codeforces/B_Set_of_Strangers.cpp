#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n + 2, vector<ll>(m + 2, 0));
    vector<ll> mp(n * m + 1, 0);
    for (ll i = 1; i < n + 1; i++) {
        for (ll j = 1; j < m + 1; j++) {
            cin >> a[i][j];
            mp[a[i][j]] = 1;
        }
    }
    for (ll i = 1; i < n + 1; i++) {
        for (ll j = 1; j < m + 1; j++) {
            if (mp[a[i][j]] == 1) {
                ll t = a[i][j];
                if (a[i - 1][j] == t || a[i + 1][j] == t || a[i][j - 1] == t
                    || a[i][j + 1] == t) {
                    mp[a[i][j]] = 2;
                }
            }
        }
    }
    bool b = false;
    ll ans = -1;
    for (ll i = 0; i < n * m + 1; i++) {
        ans += mp[i];
        if (mp[i] == 2)
            b = true;
    }
    if (b)
        ans--;
    cout << ans << nl;
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}