#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n, x;
    cin >> n >> x;
    if (n == 1) {
        cout << x << nl;
        return;
    }
    vector<ll> a(n);
    ll j = 0, Or = 0;
    for (ll i = 1; i < n; i++) {
        if ((x | i) != x)
            a[i] = x;
        else
            a[i] = i;
        Or |= a[i];
    }
    if (Or != x)
        a[n - 1] = x;
    for (ll i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << nl;
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