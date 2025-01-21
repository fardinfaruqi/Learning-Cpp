#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;

void solve() {
    ll n, k, t;
    cin >> n >> k;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        cin >> t;
        mp[t]++;
    }
    if (n == k) {
        cout << 1 << '\n';
        return;
    }
    vector<ll> v;
    for (auto& i : mp) {
        v.push_back(i.second);
    }
    sort(v.begin(), v.end());
    ll sum = 0, i = 0, ans = v.size();
    for (i = 0; i < v.size() - 1; i++) {
        if (k >= v[i]) {
            k -= v[i];
            ans--;
        } else {
            break;
        }
    }
    cout << ans << '\n';
    return;
}

void solve2() {
    ll n, k, t;
    cin >> n >> k;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        cin >> t;
        mp[t]++;
    }
    vector<ll> freq;
    for (auto& i : mp) {
        freq.push_back(i.second);
    }
    sort(freq.begin(), freq.end());
    ll ans = freq.size();
    for (ll i = 0; i < freq.size() - 1; i++) {
        if (k >= freq[i]) {
            k -= freq[i];
            ans -= 1;
        } else {
            break;
        }
    }
    cout << ans << '\n';
    return;
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