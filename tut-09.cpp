#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Tell me your age: ";
    cin >> age;

    // 1. Selection control structure: If else-if else ladder
    if ((age > 0) && (age < 18))
    {
        cout << "You are not welcome to the party!" << endl;
    }
    else if (age == 18)
    {
        cout << "You're a kid and you must carry your kid pass." << endl;
    }
    else if (age < 1)
    {
        cout << "You're not yet born!" << endl;
    }
    else
    {
        cout << "You're welcome to the party!" << endl;
    }

    // 2. Selection control structure: Switch Case statements
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;
    case 22:
        cout << "You are 22" << endl;
        break;
    case 2:
        cout << "You are 2" << endl;
        break;
    default:
        cout << "No special cases" << endl;
        break;
    }

    return 0;
}
