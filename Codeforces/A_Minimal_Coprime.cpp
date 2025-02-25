#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

ll GCD(ll x, ll y) {
    if (y == 0)
        return x;
    return GCD(y, x % y);
}

void solve() { // O(n^2)
    ll l, r, count = 0;
    cin >> l >> r;
    for (ll i = l; i <= r; i++) {
        for (ll j = i; j <= r; j++) {
            if (GCD(i, j) == 1) {
                count++;
                break;
            }
        }
    }
    cout << count << nl;
    return;
}
void solve2() { // O(1)
    ll l, r;
    cin >> l >> r;
    ll count = r - l + 1;
    if (r != 1)
        count--;
    cout << count << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve2();
    }
    return 0;
}