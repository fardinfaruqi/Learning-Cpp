#include <bits/stdc++.h>
using namespace std;
#define LC(a) (a >= 'a' ? char(a) : char(a + ' '))

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (LC(s[i]) == 'a' || LC(s[i]) == 'e' || LC(s[i]) == 'i' || LC(s[i]) == 'o' || LC(s[i]) == 'u' || LC(s[i]) == 'y')
            continue;
        else
            cout << "." << LC(s[i]);
    }
    cout << endl;
    return 0;
}