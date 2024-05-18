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

    inFile.seekg(0L, ios::beg); // move to the beginning of the file
    first = inFile.tellg();     // save the offset of the first character

    inFile.seekg(0L, ios::end);
    last = inFile.tellg();

    for (offset = 0L; offset < last; offset++)
    {
        inFile.seekg(offset, ios::beg);
        ch = inFile.get();
        cout << ch << " : ";

        if (offset > last)
        {
            cout << "Error.  The program is attempting to reference a position beyond the end of the file." << endl;
        }
    }

    inFile.close();

    cout << endl;

    return 0;
}