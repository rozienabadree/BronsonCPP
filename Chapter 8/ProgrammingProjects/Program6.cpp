#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int EMPLOYEES = 2;
    string filename = "employ.dat";
    char sex;
    int i, id, years, hours;
    double wage;

    ifstream inFile(filename.c_str());
    if (inFile.fail())
    {
        cout << "\nFailed to open the input file." << endl;
        cout << "Make sure the file currently exists" << endl;
        exit(1);
    }

    for (i = 0; i < EMPLOYEES; i++)
    {
        inFile >> id >> sex >> wage >> years;
        cout << "\n Enter the hours worked by employee #" << id << ": ";
        cin >> hours;
        cout << "This employee's total pay for the month is: $";
        cout << fixed << setprecision(2) << wage * (double)hours << endl;
    }

    inFile.close();

    return 0;
}