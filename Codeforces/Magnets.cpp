#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, q, g = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> p;
        if (i == 0)
        {
            q = p;
            g++;
        }
        if (i > 0 && q != p)
        {
            g++;
            q = p;
        }
    }
    cout << g << endl;
    return 0;
}