#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, l_num, t_dig;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        ll mat[n][n];
        l_num = pow(2, (n * 2) - 2);
        t_dig = 0;
        while (l_num != 0)
        {
            l_num /= 10;
            t_dig++;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                if (i == 0 && j == 0)
                {
                    mat[i][j] = 1;
                    cout << setw(t_dig) << mat[i][j];
                }
                else if (j == 0)
                {
                    mat[i][j] = mat[i - 1][j] * 2;
                    cout << setw(t_dig) << mat[i][j];
                }
                else
                {
                    mat[i][j] = mat[i][j - 1] * 2;
                    cout << " " << setw(t_dig) << mat[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}