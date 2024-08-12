#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll a, count = 0;
    string s;
    cin >> a >> s;
    string s2[3] = { "mapie", "map", "pie" };
    for (string s3 : s2) {
        size_t pos = 0;
        while (1) {
            pos = s.find(s3, pos);
            if (pos == string::npos) {
                break;
            }
            s[pos + (s3.size() / 2)] = '?';
            count++;
        }
    }
    cout << count << endl;
    return;
}

// void solve() {
//     ll a, count = 0;
//     string s;
//     cin >> a >> s;
//     string s2[3] = { "mapie", "map", "pie" };
//     for (string str : s2) {
//         for (size_t i = s.find(str, 0); i != string::npos; i = s.find(str, i)) {
//             s[i + (str.size() / 2)] = '?';
//             count++;
//         }
//     }
//     cout << count << endl;
//     return;
// }

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