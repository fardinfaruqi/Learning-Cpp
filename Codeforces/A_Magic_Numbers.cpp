#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    bool f = true;
    if (s.length() != 0)
        while (f)
        {
            if (s.substr(0, 3).compare("144") == 0)
                s.erase(0, 3);
            else if (s.substr(0, 2).compare("14") == 0)
                s.erase(0, 2);
            else if (s.substr(0, 1).compare("1") == 0)
                s.erase(0, 1);
            else if (s.length() == 0)
                break;
            else
                f = false;
        }
    cout << (f ? "YES" : "NO") << endl;
    return 0;
}