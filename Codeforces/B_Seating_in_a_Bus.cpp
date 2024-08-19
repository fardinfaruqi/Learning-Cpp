#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll a, b;
    cin >> a;
    ll seat[a + 2];
    for (ll i = 0; i < a + 2; i++) {
        seat[i] = 0;
    }
    bool flag = false;
    for (ll i = 1; i <= a; i++) {
        cin >> b;
        seat[b]++;
        if (i > 1 && !flag && seat[b - 1] == 0 && seat[b + 1] == 0) {
            flag = true;
        }
    }
    if (flag) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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