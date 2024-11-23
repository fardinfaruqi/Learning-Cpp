#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll n, k;
    string s;
    cin >> n >> k >> s;
    ll count = 0, str = 0;
    for (ll i = 0; i < n; i++) {
        // cout << s[i];
        if (s[i] == 'X') {
            str += (count / k);
            // cout << i + 1 << " " << count << " " << str << '\n';
            count = 0;
            continue;
        }
        count++;
    }
    str += (count / k);
    cout << str << '\n';
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