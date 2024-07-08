#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(int argc, char const *argv[])
{
    ll l, _1 = 0, _0 = 0;
    string s;
    cin >> l >> s;
    size_t f = s.find('1');
    if (f != string::npos)
    {
        for (ll i = 0; i < l; i++)
        {
            if (s[i] == '1')
                _1++;
            else
                _0++;
        }
    }
    cout << s.length() - min(_1, _0) * 2 << endl;
    return 0;
}
