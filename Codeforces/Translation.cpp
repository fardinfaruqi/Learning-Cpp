#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    reverse(s.begin(), s.end());
    cout << (s.compare(t) == 0 ? "YES" : "NO") << endl;
    return 0;
}