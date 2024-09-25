#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n;
    cin >> n;
    ll x[n];
    for (ll i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (ll i = 0; i < n; i++) {
        if (i == n - 1)
            cout << x[n - n] << " ";
        else
            cout << x[i + 1] << " ";
    }
    cout << endl;
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