#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    string s;
    cin >> n >> s;
    char c1 = s[0];
    char c2 = s[1];
    int count = 1;
    for (int i = 1; i < n - 1; i++)
    {
        int count2 = 1;
        for (int j = i + 1; j < n; j++)
            if (s[i - 1] == s[j - 1] && s[i] == s[j])
                count2++;
        if (count2 > count)
        {
            count = count2;
            c1 = s[i - 1];
            c2 = s[i];
        }
    }
    cout << c1 << c2 << endl;
    return 0;
}