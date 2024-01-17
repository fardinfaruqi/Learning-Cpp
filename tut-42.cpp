/*  Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?    */

#include <iostream>
using namespace std;

class SimpleCalc
{
private:
    float num1, num2;
    char oper;

public:
    SimpleCalc(){};
    SimpleCalc(float a = 0, float b = 0)
    {
        num1 = a;
        num2 = b;
    };
    float result(char c = '+')
    {
        if (c == '+')
            return num1 + num2;
        else if (c == '-')
            return num1 - num2;
        else if (c == '*')
            return num1 * num2;
        else if (c == '/')
            return num1 / num2;
        else
            return 0;
    }
    ~SimpleCalc(){};
};

int main()
{
    float num1, num2;
    char oper;
    cout << "Enter num-1: ";
    cin >> num1;
    cout << "Enter num-2: ";
    cin >> num2;
    SimpleCalc calc(num1, num2);
    cout << "Enter the operator{+,-,*,/}: ";
    cin >> oper;
    cout << "Result = " << calc.result(oper) << endl;
    return 0;
}