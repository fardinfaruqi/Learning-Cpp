#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no-" << counter + 1 << ": ";
    cin >> itemId[counter];
    cout << "Enter Price of your item: ";
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    cout << "\n----------------------\n";
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
    cout << "----------------------\n";
}

int main()
{
    char go;
    Shop dukaan;
    dukaan.initCounter();
    while (1)
    {
        dukaan.setPrice();
        cout << "Enter 'c' to continue or anyother key to stop: ";
        cin >> go;
        if (go != 'c' && go != 'C')
        {
            break;
        }
    }
    dukaan.displayPrice();
    return 0;
}