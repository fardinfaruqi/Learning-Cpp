#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

string s;

bool abc(ll x) {
    return (s[x] == 'A' && s[x + 1] == 'B' && s[x + 2] == 'C');
}

ll abcCount(ll n) {
    ll count = 0;
    bool b;
    for (ll i = 0; i < n - 2; i++) {
        b = abc(i);
        count += abc(i);
        i += (b ? 2 : 0);
    }
    return count;
}

void solve() {
    ll n, q;
    cin >> n >> q >> s;
    ll x;
    char c;
    ll count = abcCount(n);
    bool b = false, b1 = false;
    // cout << count << "\n";
    while (q--) {
        cin >> x >> c;
        x--;
        b = false, b1 = false;
        if (x == 0) {
            b = abc(x);
            s[x] = c;
            b1 = abc(x);
            count += b1 - b;
        } else if (x == 1) {
            b = abc(x - 1) || abc(x);
            s[x] = c;
            b1 = abc(x - 1) || abc(x);
            count += b1 - b;
        } else if (x == n - 1) {
            b = abc(x - 2);
            s[x] = c;
            b1 = abc(x - 2);
            count += b1 - b;
        } else if (x == n - 2) {
            b = abc(x - 2) || abc(x - 1);
            s[x] = c;
            b1 = abc(x - 2) || abc(x - 1);
            count += b1 - b;
        } else {
            b = abc(x - 2) || abc(x - 1) || abc(x);
            s[x] = c;
            b1 = abc(x - 2) || abc(x - 1) || abc(x);
            count += b1 - b;
        }
        cout << count << '\n';
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