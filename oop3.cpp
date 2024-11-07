#include <iostream>
using namespace std;

class Shop
{
    int itemid[100];
    int price[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << " Enter your id # for item " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter your item price :";
    cin >> price[counter];
    counter++;
};

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << " The Price of your item with id no  " << itemid[i] << " is : " << price << endl;
    }
}
int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}