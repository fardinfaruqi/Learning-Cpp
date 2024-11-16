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
    for (ll i = 0; i < n; i++) {
        cin >> vec[i];
    }
    for (ll i = 0; i < n - 1; i++) {
        if (vec[i] - vec[i + 1] == 1)
            swap(vec[i + 1], vec[i]);
    }
    if (is_sorted(vec.begin(), vec.end()))
        cout << "YES\n";
    else
        cout << "NO\n";
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