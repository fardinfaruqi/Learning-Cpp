#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < n / a; i++)
        {
            for (int j = 0; j < a / b; j++)
            {
                for (int k = 0; k < b; k++)
                {
                    cout << char('a' + k);
                }
            }
            for (int j = 0; j < a % b; j++)
            {
                cout << char('a' + j);
            }
        }
        for (int i = 0; i < (n % a) / b; i++)
        {
            for (int k = 0; k < b; k++)
            {
                cout << char('a' + k);
            }
        }
        for (int i = 0; i < (n % a) % b; i++)
        {
            cout << char('a' + i);
        }
        cout << endl;
    }
    return 0;
}