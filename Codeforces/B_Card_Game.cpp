#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll a, b, x, y, count = 0;
    cin >> a >> b >> x >> y;
    if ((a > x && b > y) || (a == x && b > y) || (a > x && b == y))
        count++;
    if ((a > y && b > x) || (a == y && b > x) || (a > y && b == x))
        count++;
    cout << count * 2 << endl;
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