#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll left = 0, right = 0, invC = 0;
    for (ll i = 0; i < n; i++) {
        ll invX = 0, c = 0;
        for (ll j = i + 1; j < n; j++) {
            if (a[i] > a[j])
                c++;
            else if (a[i] < a[j])
                invX++;
            ll dif = invX - c;
            if (dif < invC) {
                swap(dif, invC);
                left = i;
                right = j;
            }
        }
    }
    cout << left + 1 << ' ' << right + 1 << nl;
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