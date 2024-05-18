#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string filename = "employee.dat", line;
    fstream outFile;
    int count = 0;

    outFile.open(filename.c_str());

    if (outFile.fail())
    {
        cout << "\nThe OUTPUT file was not successfully opened."
             << "\n Please check that the file currently exists."
             << endl;

        exit(1);
    }

    while (getline(outFile, line))
    {
        count++;
        cout << count << ".  " << line << endl;
    }

    outFile.close();
    cout << "The output file was successfully closed." << endl;

    return 0;
}