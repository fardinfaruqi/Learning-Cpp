#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    bool d = false;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
            d = true;
    }
    cout << (d ? "HARD" : "EASY") << endl;
    return 0;
}