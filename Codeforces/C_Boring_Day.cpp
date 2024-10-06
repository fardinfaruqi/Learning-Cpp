#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n, l, r;
    cin >> n >> l >> r;
    ll x[n];
    for (ll i = 0; i < n; i++)
        cin >> x[i];
    ll sum = 0, ans = 0;
    for (ll j = 0, i = 0; i < n; i++) {
        sum += x[i];
        if (x[i] >= l && x[i] <= r) {
            sum = 0;
            ans++;
            j = i + 1;
            continue;
        }
        while (sum > r) {
            sum -= x[j];
            j++;
        }
        if (sum >= l && sum <= r) {
            sum = 0;
            ans++;
            j = i + 1;
        }
    }
    cout << ans << "\n";
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