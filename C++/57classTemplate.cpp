#include <iostream>

using namespace std;

template <class T> // declaring class template "T". this T will be used to store the data type and that will be replaced by T through the code.
class vector1
{

public:
    T *arr; // here "T" will replace the data type
    int size;

    vector1(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector1 &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }

        return d;
    }
};

int main()
{
    vector1<float> v1(3); // creating the object "v1" of template class "vector1" and passing parameter as "float" datatype.
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;

    vector1<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;

    float a = v1.dotProduct(v2);
    cout << a << endl;

    return 0;
}