#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// int main(int argc, char const* argv[]) {
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     ll n1, n2, result;
//     cin >> n1;
//     if (n1 % 2 == 0) {
//         n2 = n1;
//         n1 = n2 - 1;
//     } else {
//         n2 = n1 - 1;
//     }
//     result = (n2 / 2) * (2 + n2) / 2 - ceil(n1 / 2.0) * (1 + n1) / 2;
//     cout << fixed << result << endl;
//     return 0;
// }
int main(int argc, char const* argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, result;
    cin >> n;
    if (n % 2 == 0) {
        result = n / 2;
    } else {
        result = (n + 1) / -2;
    }
    cout << fixed << result << endl;
    return 0;
}