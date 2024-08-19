#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    string s;
    cin >> s;
    if (s.size() > 2 && s.substr(0, 2) == "10" && s[2] != '0' && stoi(s.substr(2)) >= 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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