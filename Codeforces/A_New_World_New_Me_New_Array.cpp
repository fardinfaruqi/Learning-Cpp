#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n, k, p;
    cin >> n >> k >> p;
    if (p * n < abs(k)) {
        cout << -1 << nl;
        return;
    }
    long double pK = abs(k);
    ll ans = ceil(pK / p);
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