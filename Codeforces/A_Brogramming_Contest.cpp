#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n, count = 0;
    string s, t;
    cin >> n >> s;
    for (ll i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1])
            count++;
    }
    if (s[0] == '1')
        count++;
    cout << count << nl;
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