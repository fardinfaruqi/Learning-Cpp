#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 34;
    cout << "The value of a was: " << a;
    a = 45;
    cout << "The value of a is: " << a;
    // Constants in C++
    const int b = 3;
    cout << "The value of b was: " << b << endl;
    // b = 45; // You will get an error because a is a constant
    cout << "The value of a is: " << b << endl;

    // Manipulators in C++
    int c = 3, d = 78, e = 1233;
    cout << "The value of c without setw is: " << c << endl;
    cout << "The value of d without setw is: " << d << endl;
    cout << "The value of e without setw is: " << e << endl;

    cout << "The value of c is: " << setw(4) << c << endl;
    cout << "The value of d is: " << setw(4) << d << endl;
    cout << "The value of e is: " << setw(4) << e << endl;

    // Operator Precedence
    int x = 3, y = 4;
    int z = (x * 5) + y;
    cout << z << endl;
    int m = ((((x * 5) + y) - 45) + 87);
    cout << m << endl;
    return 0;
}
