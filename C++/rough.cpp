#include <iostream>

using namespace std;

float a, b;

class simpleCalculator
{
public:
	float simpleUtility();
};

float simpleCalculator ::simpleUtility()
{
	int choice;
	cout << "Enter the operation choice: " << endl
		 << "1 for additon" << endl
		 << "2 for substraction" << endl
		 << "3 for multiplication" << endl
		 << "4 for division" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		return (a + b);
		break;
	case 2:
		return (a - b);
		break;
	case 3:
		return (a * b);
		break;
	case 4:
		return (a / b);
		break;
	default:
		cout << "plz enter a valid choice" << endl;
		return 0;
	}
}

class scientificCalculator
{
public:
	float scientificUtility();
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{
	float res;

public:
	void display();
	void setData(float, float);
	void calculator();
};

void hybridCalculator ::setData(float x, float y)
{
	a = x;
	b = y;
}

void hybridCalculator ::calculator()
{
	int choice;
	cout << "which calculator u want to use:" << endl
		 << "press 1 for simple claculator" << endl
		 << "press 2 for scientific calculator" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		res = simpleUtility();
		break;

	case 2:
		res = scientificUtility();
		break;

	default:
		cout << "Enter a valid choice" << endl;
	}
}

void hybridCalculator ::display()
{
	cout << "the result is: " << res << endl;
}

int main()
{
	hybridCalculator c;
	c.setData(10, 10);
	c.calculator();
	c.display();
	return 0;
}