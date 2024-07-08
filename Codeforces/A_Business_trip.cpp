#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int k, l = 12, sum = 0;
    int a[l];
    cin >> k;
    for (int i = 0; i < l; i++)
        cin >> a[i];
    for (int i = 0; i < l; i++)
        for (int j = i + 1; j < l; j++)
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    int i = 0;
    for (i; i < l; i++)
    {
        if (sum >= k)
            break;
        else
            sum += a[i];
    }
    if (sum >= k)
        cout << i << endl;
    else
        cout << -1 << endl;
    return 0;
}