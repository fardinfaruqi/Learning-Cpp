#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, z;
    bool flag;
    int n[4];
    cin >> y;
    while (true)
    {
    HERE:
        y++;
        z = y;
        flag = true;
        for (int i = 0, j = 1000; i < 4; i++, j /= 10)
        {
            n[i] = z / j;
            z %= j;
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (n[i] == n[j])
                {
                    flag = false;
                    goto HERE;
                }
            }
        }
        if (flag)
            break;
    }
    cout << y << endl;
    return 0;
}