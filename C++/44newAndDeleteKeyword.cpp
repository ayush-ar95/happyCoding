/*
    The new operator is an operator which denotes a request for memory allocation on the Heap.
    If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable.
*/

#include <iostream>

using namespace std;

int main()
{
    // Basic example
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *(ptr) << endl;

    // new operator
    int *p = new int(40); // this will create a memory in heap and initialize that memory with 40 and will retrun it's address to the pointer 'p'.
    cout << "The value at address p is: " << *(p) << endl;

    // allocating contigious block of element dynamically.
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // delete operator :- it deletes the contiguios block of memory (it frees the dynamically allocated memory)

    delete p;                                              // deleting dynamically allocated memory.
    cout << "The value at address p is: " << *(p) << endl; // it will print either 0 or garbage.
    delete[] arr;                                          // deleting dynamically allocated block of memory.
    cout << "The value of arr[0] is: " << arr[0] << endl;  // it will print either 0 or garbage.
    cout << "The value of arr[1] is: " << arr[1] << endl;  // it will print either 0 or garbage.
    cout << "The value of arr[2] is: " << arr[2] << endl;  // it will print either 0 or garbage.

    return 0;
}