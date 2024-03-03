#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, d = 0;
    cin >> n >> m;
    int f[m];
    for (int i = 0; i < m; i++)
    {
        cin >> f[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (f[i] > f[j])
            {
                int temp = f[i];
                f[i] = f[j];
                f[j] = temp;
            }
        }
    }
    for (int i = 0; i < m - n + 1; i++)
    {
        if (i == 0)
            d = f[i + n - 1] - f[i];
        else if (f[i + n - 1] - f[i] < d)
            d = f[i + n - 1] - f[i];
    }
    cout << d << endl;
    return 0;
}