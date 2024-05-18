#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;
    inFile.open("prices.dat"); // attempt to open the file for input
    char response;
    if (!inFile.fail()) // if it doesn't fail, the file exists
    {
        cout << "A file by the name prices.dat exists.\n"
             << "Do you want to continue and overwrite it\n"
             << " with the new data (y or n): ";
        cin >> response;
        if (tolower(response) == 'n')
        {
            cout << "The existing file will not be overwritten." << endl;
            exit(1); // terminate program execution
        }
    }
    outFile.open("prices.dat"); // now open the file for writing
    if (inFile.fail())          // check for a successful open
    {
        cout << "\nThe file was not successfully opened"
             << endl;
        exit(1);
    }
    cout << "The file has been successfully opened for output."
         << endl;
    // statements to write to the file would be placed here
    return 0;
}