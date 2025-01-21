#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n);
    ll oddSum = 0, evenSum = 0;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (i & 1)
            oddSum += v[i];
        else
            evenSum += v[i];
    }
    ll x = oddSum + evenSum;
    if (x % n != 0) {
        cout << "NO\n";
        return;
    }
    x /= n;
    ll odd = n / 2;
    ll even = n - odd;
    if (oddSum / odd != x || evenSum / even != x) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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