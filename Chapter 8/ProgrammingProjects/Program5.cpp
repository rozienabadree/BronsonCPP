#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXRECORDS = 10;
    string infilename = "employ.dat";
    string outfilename = "employ.dat";

    int id[MAXRECORDS];
    char sex[MAXRECORDS];
    double hrwage[MAXRECORDS], years[MAXRECORDS];
    char ch;

    int i, empNum, employees, index;
    bool found = false;

    ifstream inFile(infilename.c_str());

    if (inFile.fail())
    {
        cout << "ERROR: Cannot open employee data file!" << endl;
        cin.ignore(); // needed for MS C++ Express users
        exit(1);
    }

    // Read in the employee records from the file
    for (i = 0; i < MAXRECORDS; i++)
    {
        inFile >> id[i];
        inFile >> sex[i];
        inFile >> hrwage[i];
        inFile >> years[i];
        if (inFile.eof())
            break; // stop when the eof has been detected
    }

    employees = i; // capture the number of records that were read
    inFile.close();

    // display the input records
    cout << "The following data was read from the file:" << endl;
    cout << "  id sex   wage  years" << endl;
    cout << "----------------------" << endl;
    for (i = 0; i < employees; i++)
        cout << setw(4) << id[i] << setw(3) << sex[i]
             << setw(8) << hrwage[i] << "   " << years[i] << endl;

    while (true)
    {
        cout << "\nWould you like to update the wage or years of an employee? (Y/N) ";
        cin >> ch;
        cin.ignore(); // ignore the return key
        if (tolower(ch) != 'y')
            break; // get out of the while loop
        cout << "Please enter an id number: ";
        cin >> empNum;

        // find the employee
        for (i = 0; i < employees; i++)
        {
            if (empNum == id[i])
            {
                found = true;
                index = i;
                break; // break out of for loop
            }
        }

        if (!found)
        {
            cout << "This employee number is not assigned." << endl;
        }
        else
        {
            cout << "Would you like to update the wage, year or both? (W/Y/B) ";
            cin >> ch;
            cin.ignore(); // ignore the return key
            if (tolower(ch) == 'w' || tolower(ch) == 'b')
            {
                cout << "Enter the new wage rate: ";
                cin >> hrwage[index];
            }
            if (tolower(ch) == 'y' || tolower(ch) == 'b')
            {
                cout << "Enter the new years: ";
                cin >> years[index];
            }
        }
    } // end of while loop

    // open the output file
    ofstream outFile(outfilename.c_str());
    // write the data to the file
    for (i = 0; i < employees; i++)
        outFile << setw(4) << id[i] << setw(3) << sex[i]
                << setw(8) << hrwage[i] << "   " << years[i] << endl;

    outFile.close();

    // display the data written to the file
    cout << "The following data was written to the file:" << endl;
    cout << "  id sex   wage  years" << endl;
    cout << "----------------------" << endl;
    for (i = 0; i < employees; i++)
        cout << setw(4) << id[i] << setw(3) << sex[i]
             << setw(8) << hrwage[i] << "   " << years[i] << endl;

    return 0;
}