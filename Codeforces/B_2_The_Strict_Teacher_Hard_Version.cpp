#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
    ll n, m, q;
    cin >> n >> m >> q;
    ll b[m];
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(b, b + m);
    while (q--) {
        ll x;
        cin >> x;
        ll low = 0, high = m - 1, right = n + 1;
        while (low <= high) {
            ll mid = low + (high - low) / 2;
            if (b[mid] > x) {
                if (b[mid] < right)
                    right = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (right == n + 1) {
            // cout << "r==" << n + 1 << ": " << b[m - 1] << "\n";
            cout << n - b[m - 1] << "\n";
        } else if (right == 0) {
            // cout << "r==0: " << b[right] << "\n";
            cout << b[right] - 1 << "\n";
        } else {
            // cout << "l-" << b[right - 1] << " r-" << b[right] << "\n";
            cout << (b[right] - b[right - 1]) / (ll)2 << "\n";
        }
    }

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