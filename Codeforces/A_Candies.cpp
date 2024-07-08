#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 3, j = 2; true; i += pow(2, j), j++)
        {
            if ((n / i) * i == n)
            {
                cout << (n / i) << endl;
                break;
            }
        }
    }
}