#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    string filename = "text.dat", line;
    fstream inFile;

    inFile.open(filename.c_str()); // open the file for writing

    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();
    cout << "The file has been successfully closed.";

    return 0;
}