#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    string s;

    while (t--)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
            x++;
        else
            x--;
    }
    cout << x << endl;
    return 0;
} 