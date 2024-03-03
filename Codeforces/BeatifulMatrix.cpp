#include <iostream>
using namespace std;

int main()
{
    int mat[5][5], row, col;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                row = i - 2;
                col = j - 2;
            }
        }
    }
    if (row < 0)
        row *= -1;
    if (col < 0)
        col *= -1;
    cout << row + col << endl;
    return 0;
} 