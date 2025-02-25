#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n;
    cin >> n;
    vector<ll> v(n * 2 + 1), preSum(n * 2 + 1);
    ll l, r;
    vector<pair<ll, ll>> pVec;
    for (ll i = 0; i < n; i++) {
        cin >> l >> r;
        if (l == r) {
            v[l]++;
            preSum[l] = 1;
        }
        pVec.push_back({ l, r });
    }
    for (ll i = 1; i < n * 2 + 1; i++) {
        preSum[i] += preSum[i - 1];
    }
    for (ll i = 0; i < n; i++) {
        if (pVec[i].first == pVec[i].second) {
            if (v[pVec[i].first] == 1) {
                cout << 1;
            } else {
                cout << 0;
            }
            continue;
        }
        if (preSum[pVec[i].second] - preSum[pVec[i].first - 1] < pVec[i].second - pVec[i].first + 1)
            cout << 1;
        else
            cout << 0;
    }
    cout << nl;
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