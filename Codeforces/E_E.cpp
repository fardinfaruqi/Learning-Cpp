#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    if (n < 5) {
        cout << -1 << '\n';
        return;
    }
    for (ll i = 1; i <= n; i += 2) {
        if (i == 5)
            continue;
        cout << i << ' ';
    }
    cout << "5 4 ";
    for (ll i = 2; i <= n; i += 2) {
        if (i == 4)
            continue;
        cout << i << ' ';
    }
    cout << '\n';
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