#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n, t;
    cin >> n >> t;
    ll digit = 0;
    for (ll i = t; i != 0; i /= 10) {
        digit++;
    }
    if (digit > n)
        cout << "-1\n";
    else {
        n -= digit;
        cout << t;
        for (ll i = 0; i < n; i++)
            cout << 0;
        cout << '\n';
    }
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