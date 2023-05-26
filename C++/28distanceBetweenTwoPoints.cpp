// In this program we will calculate the distance between two points.

#include <iostream>
#include <cmath>
using namespace std;

class point; // forward declaration of class point so that it can be used in claculate class.

class calculate
{
public:
    int distance(point p, point q); // distance function is declared but not defined coz point class is defined later.
};

class point
{
    int x, y;

public:
    point(int, int); // constructor of point class is declared.

    void displayPoint(void) // this function display the point entered by user.
    {
        cout << "the point is: (" << x << "," << y << ")" << endl;
    }

    friend int calculate ::distance(point, point); // friend function is declared so that distance funtion of claculate class can use private data of point class.
};

point ::point(int a, int b) // constructor of class point is define here.
{
    x = a;
    y = b;
}

int calculate ::distance(point p, point q) // distance function is defined here.
{
    int a = p.x - q.x;
    int b = p.y - q.y;
    int c = (a * a) + (b * b);
    return sqrt(c);
}

int main()
{
    int a, b; // these variable are defined to take input from user.
    cout << "Enter first point: " << endl;
    cin >> a >> b;
    point p(a, b); // 1st point object is created.
    cout << "Enter second point: " << endl;
    cin >> a >> b;
    point q(a, b); // 2nd point object is created.

    p.displayPoint();
    q.displayPoint();

    calculate c; // object of class calculate is created to call distance function.
    int dist = c.distance(p, q);

    cout << "The distance between these points is: " << dist << endl; // calculated distance is printed.
    return 0;
}