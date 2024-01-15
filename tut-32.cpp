#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    Simple(int a = 0, int b = 0, int c = 0)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value of data1 is " << data1 << ", data2 is " << data2 << " and data3 is " << data3 << endl;
}

int main()
{
    Simple s(1, 8);
    s.printData();
    return 0;
}