#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll countTotal_1100(string& s) {
    ll count = 0;
    auto pos = s.find("1100");
    while (pos != string::npos) {
        count++;
        pos = s.find("1100", pos + 4);
    }
    return count;
}

bool checkSub(string& s, ll i, ll& len) {
    if (i >= 0 && i < len - 3) {
        return s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0';
    }
    return false;
}

void solve() {
    string s;
    ll q, i;
    char v;
    cin >> s >> q;
    ll count = countTotal_1100(s);
    ll len = s.length();
    // cout << "Count = " << count << '\n';
    bool b1, b2;
    while (q--) {
        cin >> i >> v;
        if (len < 4) {
            cout << "NO\n";
            continue;
        }
        i--;
        if (s[i] != v) {
            b1 = checkSub(s, i - 3, len) || checkSub(s, i - 2, len) || checkSub(s, i - 1, len) || checkSub(s, i, len);
            // cout << b1 << '\n';
            s[i] = v;
            b2 = checkSub(s, i - 3, len) || checkSub(s, i - 2, len) || checkSub(s, i - 1, len) || checkSub(s, i, len);
            count += b2 - b1;
            // cout << count << endl;
        }
        cout << (count ? "YES\n" : "NO\n");
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