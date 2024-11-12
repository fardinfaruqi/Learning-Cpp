#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    // cout << n << k << l << c << d << p << nl << np << endl;
    ll drink = (k * l) / nl;
    ll slice = c * d;
    ll salt = p / np;
    ll toast = min(drink, min(slice, salt));
    cout << toast / n << endl;
    return;
}
int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // while (1)
    solve();
    return 0;
}