#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n > 2019)
        {
            if (n % 2020 != 0)
            {
                n -= 2021;
            }
            else
            {
                n %= 2020;
            }
        }
        cout << (n == 0 ? "YES" : "NO") << endl;
    }
}