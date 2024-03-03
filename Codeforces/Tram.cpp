#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, in, out, total = 0, min = 0;
    cin >> t;
    while (t--)
    {
        cin >> out >> in;
        total += in - out;
        if (min < total)
            min = total;
    }
    cout << min << endl;
    return 0;
}