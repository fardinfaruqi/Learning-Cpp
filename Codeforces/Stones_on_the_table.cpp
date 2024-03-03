#include <iostream>
#include <string>
using namespace std; // R G G B G

int main()
{
    int n, c = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
} 