#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll _1 = 0, _0 = 0;
    bool b = true;
    if (s[0] != '1' && s[n - 1] != '1') {
        b = false;
        for (ll i = 1; i < n - 2; i++) {
            if (s[i] == '1' && s[i + 1] == '1') {
                b = true;
                break;
            }
        }
    }
    cout << (b ? "YES" : "NO") << '\n';
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