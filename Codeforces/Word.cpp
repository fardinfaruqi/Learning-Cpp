#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, upp, low;
    int u = 0, l = 0;
    cin >> s;
    upp = s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 'a')
        {
            u++;
            s[i] += 32;
        }
        else
        {
            l++;
            upp[i] -= 32;
        }
    }
    cout << (u > l ? upp : s) << endl;
    return 0;
} 