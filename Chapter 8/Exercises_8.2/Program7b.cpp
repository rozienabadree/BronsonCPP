#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string filename = "info.dat", initial, surname, ssn;
    float rate, hours;

    ifstream inFile;
    inFile.open(filename.c_str());
    
    if (inFile.fail())
    {
        cout    << "\nThe file could not be opened for reading."
                << "\n Please check the document."
                << endl;

        exit(1);
    }

    cout << fixed << setprecision(2) << endl;

    cout << "   SSN \t\t\t Name \t\t\t Gross Pay" << endl;
    cout << "---------- \t\t ---------- \t\t ---------------" << endl;
    inFile >> initial >> surname >> ssn >> rate >> hours;

    while (inFile.good())
    {
        cout << initial << " " << surname << "\t\t" << ssn << "\t\t" << rate * hours << endl;
        inFile >> initial >> surname >> ssn >> rate >> hours;
    }

    cout << initial << " " << surname << "\t\t\t" << ssn << "\t\t" << rate * hours << endl;

    inFile.close();
    cout << "\nThe file was successfully closed." << endl;

    return 0;
}