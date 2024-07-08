#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char ch;
    string s;
    cin >> ch >> s;
    int p = ch == 'R' ? -1 : 1;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < s1.length(); j++)
        {
            if (s[i] == s1[j])
            {
                cout << s1[j + p];
                break;
            }
        }
    }
    cout << endl;
}