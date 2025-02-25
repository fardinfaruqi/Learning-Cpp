#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll h = 0, u = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == '-')
            h++;
        else
            u++;
    }
    ll ans = 0;
    if (h < 2 || u < 1) {
        ans = 0;
    } else {
        ans = ((h / 2) * (h - (h / 2))) * u;
    }
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