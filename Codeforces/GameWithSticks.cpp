#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    bool w = false;
    cin >> n >> m;
    if (n > m)
    {
        int temp = n;
        n = m;
        m = temp;
    }
    for (int i = 0; i < n; i++)
    {
        w = !w;
    }
    cout << (w ? "Akshat" : "Malvika") << endl;
    return 0;
}