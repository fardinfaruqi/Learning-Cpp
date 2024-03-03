#include <iostream>
using namespace std;

int main()
{
    int t, k, a, c = 0, j;
    cin >> t >> k;
    k--;
    while (t--)
    {
        cin >> a;
        if (c == k)
            j == a;
        if (c > k && a < j)
            break;
        if (a > 0)
            c++;
    }
    cout << c << endl;
    return 0;
} 