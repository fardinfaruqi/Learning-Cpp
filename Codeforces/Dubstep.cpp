#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; int c = 1; bool f = false;
    cin >> s;
    if(s.length() == 1 || s.length() == 2 ){
        cout << s << ' ' << endl; return 0;
    }
    for (int i = 0; i < s.length(); i++) {
        if(i==s.length()-1 && (s[i] == 'W' || (s[i] == 'U' && s[i-1] == 'W'))){
            if(s[i] == 'U') cout << s[i-1] << s[i] << ' ';
            else cout << s[i] << ' ';
        }
        else if (c == 1 && s[i] == 'W') c++;
        else if (c == 2 && s[i] == 'U') c++;
        else if (c == 3 && s[i] == 'B') {
            c = 1;
            if (f) {
                cout << ' '; f = false;
            }
        } else if (c == 2 && s[i] != 'U') {
            c = 1; f = true; cout << s[i - 1]; i--;
        } else if (c == 3 && s[i] != 'B') {
            c = 1; f = true; cout << s[i - 2] << s[i - 1]; i--;
        } else {
            cout << s[i]; f = true;
        }
    }
    cout << endl;
    return 0;
}