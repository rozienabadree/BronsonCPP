#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string filename = "parts.dat";
    string part;
    int amount, quantity, min, balance, needed;
    ifstream inFile;

    inFile.open(filename.c_str());

    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    // read and display the file's contents
    cout << "Part     Current      Amount " << endl;
    cout << "Number   Balance      Needed " << endl;
    cout << "------   -------      ------ " << endl;
    inFile >> part >> amount >> quantity >> min;

    while (inFile.good())
    {
        balance = amount - quantity;
        needed = min - balance;
        cout << part << "       " << setw(3)
             << balance << "       " << setw(3);
        if (needed > 0)
            cout << needed << endl;
        else
            cout << "0" << endl;
        inFile >> part >> amount >> quantity >> min;
    }
    inFile.close();

    return 0;
}