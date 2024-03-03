#include <iostream>
#include <string>
using namespace std;

string lowerString(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    return s;
}

int main()
{
    string a, b;
    cin >> a >> b;
    lowerString(a);
    lowerString(b);
    cout << lowerString(a).compare(lowerString(b)) << endl;
    return 0;
} 