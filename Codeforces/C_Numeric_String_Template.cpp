#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
#define nl '\n'

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr1(n), vec1;
    map<ll, vector<ll>> map1;
    for (ll i = 0; i < n; i++) {
        cin >> arr1[i];
        if (map1[arr1[i]].size() == 0) {
            vec1.push_back(arr1[i]);
        }
        map1[arr1[i]].push_back(i);
    }

    ll q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        ll len = s.length();
        if (len != n) {
            cout << "NO" << nl;
            continue;
        }
        vector<char> vec2;
        map<char, vector<ll>> map2;
        bool b = true;
        for (ll i = 0; i < len; i++) {
            if (map2[s[i]].size() == 0) {
                vec2.push_back(s[i]);
            }
            map2[s[i]].push_back(i);
        }

        auto size = map1.size();
        if (size != map2.size()) {
            cout << "NO" << nl;
            continue;
        }
        bool flag = true;
        for (ll i = 0; i < size; i++) {
            if (map1[vec1[i]] != map2[vec2[i]]) {
                cout << "NO" << nl;
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << nl;
    }
}
int main() {
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