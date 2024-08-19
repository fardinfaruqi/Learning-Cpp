#include <bits/stdc++.h>
using namespace std;
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve() {
    ll n, x;
    cin >> n;
    vector<ll> a, b;
    for (ll i = 0; i < n; i++) {
        cin >> x;
        a.PB(x);
    }
    for (ll i = 0; i < n; i++) {
        cin >> x;
        b.PB(x);
    }
    bool flag = true;
    for (ll i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Bob" << endl;
    else {
        flag = true;
        for (ll i = 0; i < a.size(); i++) {
            if (a[i] != b[a.size() - 1 - i]) {
                flag = false;
                break;
            }
        }
        cout << (flag ? "Bob" : "Alice") << endl;
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