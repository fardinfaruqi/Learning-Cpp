#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "How are you?" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "How you doin?" << endl;
    }
};

int main()
{
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();

    return 0;
}
