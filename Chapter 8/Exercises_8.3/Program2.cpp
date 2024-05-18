#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string filename = "test.dat";
    char ch;
    long offset, first, last;

    ifstream inFile(filename.c_str());
    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists"
             << endl;
        exit(1);
    }

    inFile.seekg(0L, ios::end); // move to the end of the file
    last = inFile.tellg();      // save the offset of the last character
    inFile.seekg(0L, ios::beg); // move to the beginning of the file

    // for(offset = 0L; offset <= last; offset++)   // use this to print the characters in order
    for (offset = (last - 1); offset >= 0; offset--)
    {
        inFile.seekg(offset, ios::beg);
        ch = inFile.get();
        cout << ch << " : ";
    }

    inFile.close();

    cout << endl;

    return 0;
}