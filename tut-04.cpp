#include <iostream>
using namespace std;

int global = 6;

void myFunction()
{
    int a;
    cout << "Value of global variable from user-defined function: " << global << "\n";
}

int main()
{
    int local = 9;
    local = 78;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool boolean_1 = true;
    bool boolean_2 = false;
    myFunction();
    cout << "Value of global variable from main funtion: " << global << "\n";
    cout << "Value of 'a' is " << a << ".\nValue of 'b' is " << b << ".\nValue of 'pi' is " << pi << "\nValue of 'c' is " << c << "\n";
    cout << "Value of boolean when true is " << boolean_1 << "\nValue of boolean when false is " << boolean_2 << "\n";
    return 0;
}
