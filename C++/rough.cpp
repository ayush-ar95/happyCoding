#include<iostream>
#include <iomanip>

using namespace std;
void solve( float number, int place) {
   cout << fixed;
   cout << setprecision( place );
   cout << number << endl;
}
int main(){
   cout << "Number 45.278586 up to 3 decimal places: ";
   solve( 45.278586, 3);
   cout << "Number 45.278586 up to 4 decimal places: ";
   solve( 45.278586, 4);
   cout << "Number 45.278586 up to 5 decimal places: ";
   solve( 45.278586, 5);
}