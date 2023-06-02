#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // connecting our file with print stream.
    ofstream print("53sampleFile.txt");

    // creating a name string and filling it with the string entered by the user.
    string name;
    cout << "Enter your name: " << endl;
    cin >> name; // this will take single input i.e:- no space or new line in between.

    // writing the string to the file.
    print << "My name is " + name;

    print.close(); // closing the file.

    ifstream scan("53sampleFile.txt");
    string content;

    // scan>>content;  // this will not take the input after the space or new line. For input of the whole content we use getline().
    getline(scan, content);
    cout << "the content of this file is: " << content << endl;
    scan.close();

    return 0;
}