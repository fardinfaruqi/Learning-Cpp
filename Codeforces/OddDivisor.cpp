#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n % 2 == 0 && n > 1)
            n /= 2;
        if (n % 2 != 0 && n > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}