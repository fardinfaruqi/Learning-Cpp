#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i += 2)
    {
        for (int j = i + 2; j < s.length(); j += 2)
        {
            if (s[j] < s[i])
            {
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    cout << s << endl;
    return 0;
} 