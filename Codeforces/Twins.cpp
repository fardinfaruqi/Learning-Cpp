#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b2 = 0, b1 = 0;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        b2 += s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[j] > s[i])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b2 >= b1)
        {
            b2 -= s[i];
            b1 += s[i];
            continue;
        }
        n = i;
        break;
    }
    cout << n << endl;
    return 0;
}