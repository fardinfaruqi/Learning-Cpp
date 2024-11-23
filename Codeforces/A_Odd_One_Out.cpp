#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
    // if (a & b)
    //     cout << c << '\n';
    // else if (a & c)
    //     cout << b << '\n';
    // else
    //     cout << a << '\n';
    cout << (a ^ b ^ c) << '\n';
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