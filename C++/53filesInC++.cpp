#include <iostream>
#include <fstream> // this library stores the classes that is used to do operations on file.

/*
    The useful classes for working with files in C++ are:
    1. fstreambase
    2. ifstream ---> derived form fstreambase class
    3. ofstream ---> derived form fstreambase class

    all the above class belong to the library "fstream"
*/

/*
    > In order to work with files in C++, we need to open the file.
    > Primarily, there are 2 ways to open a file:
        1. Using the constructor.
        2. Using the member function open() of the class. (in tutorial 55)
*/

using namespace std;

int main()
{
    string st = "first file operation."; // declaring a string to write.

    // Opening files using constructor and writing to it.
    ofstream out("53sampleFile.txt"); // here we have created an "object" of class "ofstream" to open a sample file and do "write" operation.
    out << st;                        // writing the string on the file using the created object.
    out.close();                      // closing the file (the link is broken)

    // Opening files using constructor and reading to it.
    string st2;                      // declaring a string to write after reading the content.
    ifstream in("53sampleFile.txt"); // here we have created and "object" of class "ifstream" to open a sample file and do "read" operation.
    // in >> st2;    // has stored the content of the file in st2 string variable. Also this will not include "space" and "new line", if we want to get whole line then we need to use "getline()".

    getline(in, st2); // syntax:  getline(object, stringVariable);    This will get the whole line.
    cout << st2;      // has printed the string on the console.
    in.close();

    return 0;
}