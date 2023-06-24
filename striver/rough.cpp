#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the row: " << endl;
    int n;
    cin >> n;
    int ans = 1;
    cout << ans << endl;
    for (int i = 1; i < n; i++)
    {
        ans = ans * (n - 1);
        ans = ans / i;
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}