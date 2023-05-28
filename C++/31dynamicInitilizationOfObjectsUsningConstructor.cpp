//  after overloading constructor we can dynamically initilize objects. ie: we can make objects after taking user input by deciding which constructor to use based on the user input.

#include <iostream>

using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit()
    {
    }

    BankDeposit(int p, int y, float r); // r can be a value like 0.04   (int fractions)
    BankDeposit(int p, int y, int r);   // r can be a value like 14   (percentage)
    void show();
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = (float)r / 100;
    returnValue = principal;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << " principal amount was: " << principal
         << " return value after " << years << " year is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r; // decimal form.
    int R;   // percentage form.

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show(); // default constructor will execute

    return 0;
}