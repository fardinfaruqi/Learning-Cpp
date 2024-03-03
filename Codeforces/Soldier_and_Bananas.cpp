#include <iostream>
using namespace std;

int main()
{
    int k, n, w, b = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        b += i * k;
    }
    cout << (b - n >= 0 ? b - n : 0) << endl;
    return 0;
} 