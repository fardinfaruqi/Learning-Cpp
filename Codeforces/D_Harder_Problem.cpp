#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
    ll n, t, mx = (2 * 1e5) + 10;
    cin >> n;
    vector<ll> v(n + 1);
    for (ll i = 0; i < n; i++) {
        cin >> t;
        v[t]++;
        if (v[t] == 1)
            cout << t << ' ';
    }
    for (ll i = 1; i <= n; i++) {
        if (v[i] != 0) {
            continue;
        }
        cout << i << ' ';
    }
    cout << '\n';
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