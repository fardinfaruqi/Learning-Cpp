#include <iostream>
using namespace std;

int main()
{
    int t, k, a;
    cin >> t >> k;
    int c[t];
    for (int i = 0; i < t; i++)
    {
        cin >> c[i];
    }
    t = c[k - 1];
    k = 0;
    for (int i : c)
    {
        if (i >= t && i > 0)
        {
            k++;
        }
    }
    cout << k << endl;
    return 0;
} 