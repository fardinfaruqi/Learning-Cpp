#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << "0\n";
        return;
    }
    for (ll i = 1; i < n; i++) {
        if (a[i] > a[0])
            swap(a[i], a[0]);
        if (a[i] < a[1])
            swap(a[i], a[1]);
    }
    ll sum = (a[0] - a[1]) * (n - 1);
    cout << sum << '\n';
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