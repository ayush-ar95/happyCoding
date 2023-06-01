#include <iostream>

using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "code of this item is: " << id << endl;
        cout << "Price of this item is: " << price << endl;
    }
};

int main()
{
    int size = 2;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << endl;
        cin >> p >> q;
        // (*ptrTemp).setData(p,q);     same as next line code.
        ptrTemp->setData(p, q);
        ptrTemp++;
    }

    for (int j = 0; j < size; j++)
    {
        cout << "The Id and price of item " << j + 1 << " is: " << endl;
        ptr->getData();
        ptr++;
    }

    return 0;
}