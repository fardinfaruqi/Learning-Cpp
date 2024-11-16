#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    vector<ll> vec(n);
    bool b = true;
    ll c1 = 1, c2 = 1;
    for (ll i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (ll i = 1; i < n; i++) {
        if (vec[i] != vec[i - 1])
            break;
        c1++;
    }
    for (ll i = n - 2; i >= 0; i--) {
        if (vec[i] != vec[i + 1])
            break;
        c2++;
    }
    // cout << c1 << " " << c2 << endl;
    if (vec[0] == vec[n - 1] && c1 != n)
        c1 += c2;
    else
        c1 = max(c1, c2);

    cout << n - c1 << '\n';
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