#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    ll day = 1;
    c -= v0;
    for (ll i = 0; true; i++) {
        // cout << "day-" << day << ' ' << c << ' ' << v0 << ' ' << v1 << ' ' << a << ' ' << l << '\n';
        if (c <= 0)
            break;
        day++;
        c += l;
        v0 = (v0 + a > v1 ? v1 : v0 + a);
        c -= v0;
    }
    cout << day << '\n';
    return;
}
int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // while (1)
    solve();
    return 0;
}