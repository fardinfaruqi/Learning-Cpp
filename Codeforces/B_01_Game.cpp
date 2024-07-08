#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int _1 = 0, _2 = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                _1++;
            else
                _2++;
        }
        cout << (min(_1, _2) % 2 != 0 ? "DA" : "NET") << endl;
    }
    return 0;
}