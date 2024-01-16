#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};
/*
                    Public Derivation   Private Derivation  Protected Derivation
Private members     Not Inherited       Not Inherited       Not Inherited
Protected members   Protected           Private             Protected
Public members      Public              Private             Protected
*/

class Derived1 : private Base{}; // class Derived1 : Base{};
class Derived2 : public Base{};
class Derived3 : protected Base{};

int main()
{
    Derived1 x;
    Derived2 y;
    Derived3 z;
    return 0;
}
