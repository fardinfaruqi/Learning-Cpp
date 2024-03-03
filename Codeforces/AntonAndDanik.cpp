#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t, a = 0, d = 0;
    cin >> t >> s;
    for (int i = 0; i < t; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    cout << (a == d ? "Friendship" : (a > d ? "Anton" : "Danik")) << endl;
    return 0;
}