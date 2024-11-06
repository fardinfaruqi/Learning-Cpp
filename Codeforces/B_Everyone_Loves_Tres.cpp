#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    cin >> n;
    if (n == 1 || n == 3)
        cout << "-1\n";
    else if (n % 2 == 0) {
        for (ll i = 0; i < n - 2; i++) {
            cout << '3';
        }
        cout << "66\n";
    } else {
        for (ll i = 0; i < n - 4; i++) {
            cout << '3';
        }
        cout << "6366\n";
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