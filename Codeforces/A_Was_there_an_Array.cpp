#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n - 2);
    for (ll i = 0; i < n - 2; i++) {
        cin >> a[i];
    }
    string ans = "YES";
    for (ll i = 1; i < n - 3; i++) {
        if (a[i] == 0 && (a[i + 1] != 0 && a[i - 1] != 0)) {
            ans = "NO";
            break;
        }
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