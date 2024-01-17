// Virtual Base Class in C++

#include <iostream>
using namespace std;
class A
{
public:
    void say()
    {
        cout << "Hello World!!" << endl;
    }
};

class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};

int main()
{
    return 0;
}
