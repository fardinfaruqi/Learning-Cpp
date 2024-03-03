#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, q, r = 0;
    cin >> t;
    while (t--)
    {
        cin >> p >> q;
        if (p < q - 1)
            r++;
    }
    cout << r << endl;
    return 0;
}