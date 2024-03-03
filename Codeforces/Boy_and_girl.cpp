#include <iostream>
using namespace std;

int main()
{
    string s;
    bool flag;
    int c = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        flag = true;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            c++;
        }
    }
    cout << (c % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
} 