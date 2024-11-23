#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n;
    string s, r;
    cin >> n >> s >> r;
    vector<char> str(n);
    for (ll i = 0; i < n; i++) {
        str[i] = s[i];
    }
    ll j = 0;
    bool b;
    while (true) {
        b = false;
        for (ll i = 0; i < str.size() - 1; i++) {
            if (str[i] != str[i + 1]) {
                str[i] = r[j];
                j++;
                str.erase(str.begin() + i + 1);
                b = true;
            }
            if (j == n - 1)
                break;
        }
        if (j == n - 1 || !b)
            break;
    }
    cout << (j == n - 1 ? "YES\n" : "NO\n");
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