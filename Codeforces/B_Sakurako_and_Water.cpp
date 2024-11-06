#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    ll mat[n][n];
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    ll times = 0, _min = 0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < n; j++) {
            if (mat[i][j] < 0) {
                for (ll k = i, l = j; k < n && l < n; k++, l++) {
                    _min = min(_min, mat[k][l]);
                    mat[k][l] = 0;
                }
                times += abs(_min);
                _min = 0;
            }
        }
    }
    cout << times << '\n';
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