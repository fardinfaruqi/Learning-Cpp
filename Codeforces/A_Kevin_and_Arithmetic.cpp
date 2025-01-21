#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
    ll n, t;
    cin >> n;
    ll odd = 0, even = 0;
    for (ll i = 0; i < n; i++) {
        cin >> t;
        if (t & 1) {
            odd++;
        } else {
            even++;
        }
    }
    if (even == 0)
        odd--;
    else
        odd++;
    cout << odd << '\n';
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