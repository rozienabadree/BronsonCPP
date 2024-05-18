#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    const int MAXRECORDS = 5;
    string filename = "shipped.dat";
    string line;
    int i = 0;

    ifstream inFile(filename.c_str());

    if (inFile.fail())
    {
        cout << "ERROR: Cannot open customer record file!" << endl;
        cin.ignore(); // needed for MS C++ Express users
        exit(1);
    }

    cout << "            Part     First    Last" << endl;
    cout << "Date        Number   Name     Name          Company" << endl;
    cout << "---------------------------------------------------" << endl;

    // read and display the file's contents
    while (getline(inFile, line))
    {
        // print date
        for (i = 0; i < 8; i++)
            cout << line[i];
        cout << "    ";

        // print part no
        for (i = 21; i < 26; i++)
            cout << line[i];
        cout << "    ";

        // print first name
        for (i = 30; i < 35; i++)
            cout << line[i];
        cout << "    ";

        // print last name
        for (i = 38; i < 48; i++)
            cout << line[i];
        cout << "    ";

        // print company name
        for (i = 50; i < 64 && line[i] != '\0'; i++)
            cout << line[i];
        cout << endl;
    }

    inFile.close();

    return 0;
}
