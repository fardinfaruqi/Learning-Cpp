#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, odds, evens;
    cin >> n >> k;
    if (n % 2 != 0)
    {
        evens = n / 2;
        odds = n / 2 + 1;
    }
    else
    {
        evens = n / 2;
        odds = n / 2;
    }
    if (odds >= k)
    {
        k = (k * (2 + (k - 1) * 2)) / 2 - ((k - 1) * (2 + (k - 2) * 2)) / 2;
        // sum of n terms = (n*(2*a+(n-1)*d))/2;
        // here n = terms; a = starting; d = difference;
    }
    else
    {
        k -= odds;
        k = (k * (4 + (k - 1) * 2)) / 2 - ((k - 1) * (4 + (k - 2) * 2)) / 2;
    }
    cout << k << endl;
    return 0;
}