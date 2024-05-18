#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
#include <iomanip> // needed for formatting
using namespace std;

int main()
{
    char response;
    string filename = "prices.dat"; // put the filename up front
    ifstream inFile;
    ofstream outFile;

    try // open a basic input stream simply to check if the file exists
    {
        inFile.open(filename.c_str());
        if (inFile.fail())
            throw 1; // this means the file doesn't exist
        // only get here if the file was found;
        // otherwise the catch block takes control
        cout << "A file by the name " << filename << " currently exists.\n"
             << "Do you want to overwrite it with the new data (y or n): ";
        cin >> response;

        if (tolower(response) == 'n')
        {
            inFile.close();
            cout << "The existing file has not been overwritten." << endl;
            exit(1);
        }
    }
    catch (int e)
    {
    }; // a do-nothing block that permits
       // processing to continue

    try
    {
        // open the file in write mode and continue with file writes
        outFile.open(filename.c_str());
        if (outFile.fail())
            throw filename;
        // set the output file stream formats
        outFile << setiosflags(ios::fixed)
                << setiosflags(ios::showpoint)
                << setprecision(2);
        // write the data to the file
        outFile << "Mats " << 39.95 << endl
                << "Bulbs " << 3.22 << endl
                << "Fuses " << 1.08 << endl;
        outFile.close();
        cout << "The file " << filename
             << " has been successfully written." << endl;
        return 0;
    }
    catch (string e)
    {
        cout << "The file " << filename
             << " was not opened for output and has not been written."
             << endl;
    }
}