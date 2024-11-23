#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

// void solve() { // TLE
//     ll n, x, y;
//     cin >> n >> x >> y;
//     vector<ll> a(n);
//     for (ll i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     ll pCount = 0;
//     for (ll i = 0; i < n - 1; i++) {
//         for (ll j = i + 1; j < n; j++) {
//             if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0)
//                 pCount++;
//         }
//     }
//     cout << pCount << '\n';
//     return;
// }
void solve() {
    ll n, x, y, a, pCount = 0;
    cin >> n >> x >> y;
    map<pair<ll, ll>, ll> m;
    for (ll i = 0; i < n; i++) {
        cin >> a;
        // pCount = pCount + m[{ (x - a % x) % x, a % y }];
        pCount = pCount + m[make_pair((x - a % x) % x, a % y)];
        m[make_pair(a % x, a % y)]++;
    }
    cout << pCount << '\n';
    return;
}
int main(int argc, char const* argv[]) {
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