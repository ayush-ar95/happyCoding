#include <iostream>

using namespace std;

int primeFac(int n)
{
    int num = 0, count = 0;
    if (0 < n && n < 10)
    {
        if (num == 5)
        {
            return 1;
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                num = primeFac(i);
                if (num == 5)
                {
                    count++;
                    cout << "count is: " << count << endl;
                }
                cout << "i is" << i << endl;
            }
        }
    }
    return count;
}

int main()
{
    cout << "hi" << endl;
    cout << "final count is:" << primeFac(5) << endl;
    cout << "bi" << endl;

    return 0;
}