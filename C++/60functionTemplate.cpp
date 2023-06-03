// In this video we will make function template.

#include <iostream>

using namespace std;

float funcAverage(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

// above is a funtion that calculate average of two number of integer type, but if we have calculate average of numbers of different datatype then we have to make multiple funtions... so we will make function template and we will input the datatype while calling the function.

template <class T1, class T2> // defined function template.
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5, 2);
    printf("The average of these numbers is %.3f\n", a);

    a = average<float, int>(5.4, 4);
    cout << "average is: " << a << endl;

    a = average<float, float>(5.4, 5.4);
    cout << "average is: " << a << endl;

    return 0;
}