#include <bits/stdc++.h>
using namespace std;
#define mod 1e9 + 7
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve() {
    ll low = 1, high = LLONG_MAX, k;
    cin >> k;
    ll mid, value, ans = high;
    while (low <= high) {
        mid = low + (high - low) / 2;
        value = mid - (ll)sqrtl(mid);
        if (value < k)
            low = mid + 1;
        else
            high = mid - 1, ans = mid;
    }
    cout << ans << "\n";
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