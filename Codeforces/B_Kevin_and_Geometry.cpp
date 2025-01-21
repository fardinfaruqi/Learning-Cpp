#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n';

void solve() {
    ll n, t;
    cin >> n;
    map<ll, ll> freq;
    vector<ll> v;
    for (ll i = 0; i < n; i++) {
        cin >> t;
        freq[t]++;
        if (freq[t] == 2) {
            v.push_back(t);
            freq[t] = 0;
        }
    }
    if (v.size() == 0) {
        cout << -1 << nl;
        return;
    }
    if (v.size() >= 2) {
        cout << v[0] << ' ' << v[0] << ' ' << v[1] << ' ' << v[1] << nl;
        return;
    }
    vector<ll> v1;
    for (pair<ll, ll> i : freq) {
        if (i.second != 0)
            v1.push_back(i.first);
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    for (ll i = 0; i < v1.size() - 1; i++) {
        if (v1[i + 1] - v1[i] < v.back() * 2) {
            cout << v.back() << ' ' << v.back() << ' ' << v1[i] << ' ' << v1[i + 1] << nl;
            return;
        }
    }
    cout << -1 << nl;
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