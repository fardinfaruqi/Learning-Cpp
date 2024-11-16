#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;

void solve() {
    ll n, h;
    cin >> n;
    vll count(n, 0);
    for (ll i = 0; i < n; i++) {
        cin >> h;
        count[h - 1]++;
    }
    ll _max = 0;
    for (ll i = 0; i < n; i++) {
        _max = max(_max, count[i]);
    }
    cout << (n - _max) << '\n';
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