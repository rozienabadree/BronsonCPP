#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    string filename = "prices.dat"; // place the filename up front
    ifstream inFile;
    inFile.open(filename.c_str()); // open the file
    if (inFile.fail())             // check for successful open
    {
        cout << "\nThe file named " << filename
             << " was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }
    cout << "\nThe file has been successfully opened for reading.\n";
    return 0;
}