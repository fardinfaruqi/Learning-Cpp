#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, temp, c = 1, c2 = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (i == 0)
            temp = n;
        else if (n >= temp)
        {
            c++;
            temp = n;
        }
        else
        {
            temp = n;
            if (c2 < c)
                c2 = c;
            c = 1;
        }
    }
    if (c2 < c)
        c2 = c;
    cout << c2 << endl;
    return 0;
}