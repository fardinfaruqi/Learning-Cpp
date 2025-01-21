#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;
    cout << (abs(a - b) & 1 ? "NO" : "YES") << '\n';
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