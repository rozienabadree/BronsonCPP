#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    string filename = "text.dat", line;
    fstream outFile;

    outFile.open(filename); // open the file for writing

    if (outFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    cout << "Enter a line to be written to the file: ";

    getline(cin, line);
    while (line != "")
    {
        outFile << line << endl;
        getline(cin, line);
    }

    outFile.close();
    cout << "The file has been successfully written.";

    return 0;
}