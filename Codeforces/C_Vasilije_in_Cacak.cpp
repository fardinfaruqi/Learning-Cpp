#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, k, x;
    cin >> n >> k >> x;
    ll minSum = (k * (k + 1)) / 2,
       maxSum = ((n * (n + 1)) / 2) - (((n - k) * (n - k + 1)) / 2);
    if (minSum <= x && maxSum >= x) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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