// In this program we will see open() and eof() functions of ofstream class.
#include <iostream>
#include <fstream>
#include <string> // this library contain getline() funtion.

using namespace std;

int main()
{
    ofstream out;                           // creating an "object" of "ofstream" class to write on the file.
    out.open("53sampleFile.txt");           // calling the "open function" of "ofstream class" using the "object".
    out << "This is me \n";                 // writing on the file using the object.
    out << "This is another line of text "; // we can write multiple times until the file is not closed, no need to open again and again.
    out.close();                            // closing the file using the object.

    ifstream in;                 // creating an "object" of "ifstream" class to read the content.
    string st, st2, st3;         // creating a string variable to store the read content.
    in.open("53sampleFile.txt"); // calling the "open function" of "ifstream" class using the object.
    // in >> st >> st2 >> st3;      // this is the way of getting multiple continuous string from the file.
    // cout << st << st2 << st3;    // this is the way of displaying multiple continuous string on the console.

    while (in.eof() == 0) // this will read till the end of file (eof) comes.
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close(); // closing the file.

    return 0;
}