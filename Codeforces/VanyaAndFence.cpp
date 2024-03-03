#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, w = 0, a;
    cin >> n >> h;
    while (n--)
    {
        cin >> a;
        a > h ? w += 2 : w++;
    }
    cout << w << endl;
    return 0;
}