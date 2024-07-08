#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; true; i++)
    {
        n--;
        if (i % m == 0)
            n++;
        if (n == 0)
        {
            cout << i << endl;
            break;
        }
    }
}