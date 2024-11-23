#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double lld;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll score = 0;
    for (ll i = 0; i < n; i++) {
        if (a[i] == -1)
            continue;
        for (ll j = i + 1; j < n; j++) {
            if (a[j] != -1 && a[i] == a[j]) {
                a[j] = -1;
                score++;
                break;
            }
        }
    }
    cout << score << '\n';
    return;
}
int main() {
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}