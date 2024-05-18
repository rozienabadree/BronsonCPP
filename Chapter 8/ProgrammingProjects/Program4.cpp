#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXRECORDS = 2;
    ofstream outFile;
    string outfilename = "employ.dat";

    int i, idnum;
    char sex;
    double hrwage, years;

    // open the file - will create the file if it doesn't exist and overwrite if exists
    outFile.open(outfilename.c_str());

    if (outFile.fail())
    {
        cout << "ERROR: Cannot open employee data file!" << endl;
        cin.ignore(); // needed for MS C++ Express users
        exit(1);
    }

    for (i = 0; i < MAXRECORDS; i++)
    {
        cout << "Enter the employee's id number: ";
        cin >> idnum;
        cout << "Enter the sex (M/F): ";
        cin >> sex;
        cout << "Enter the hourly wage rate: ";
        cin >> hrwage;
        cout << "Enter the years employed: ";
        cin >> years;

        // write the data to the file
        outFile << idnum << "  " << sex << "  " << hrwage << "  " << years << endl;
    }

    return 0;
}