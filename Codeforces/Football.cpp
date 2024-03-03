#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    char ch = '0';
    int count = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (count >= 7)
            break;
        if (s[i] != ch)
        {
            ch = s[i];
            count = 1;
        }
        else
            count++;
    }
    cout << (count >= 7 ? "YES" : "NO") << endl;
    return 0;
}