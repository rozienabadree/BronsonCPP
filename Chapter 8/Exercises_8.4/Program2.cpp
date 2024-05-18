#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int fCheck(ifstream&);  // function prototype

int main()
{
    int exists;

    ifstream inFile;    // filename of an ifstream object as specified by the problem

    exists = fCheck(inFile);     // if the file exists, stream in the file & open it

    cout << "The file exists: " << exists << endl;

    return 0;
}

int fCheck(ifstream& inFile)
{
    string filename;

    cout << "Enter a file name: ";
    getline(cin, filename);

    inFile.open(filename.c_str());

    if (inFile.fail())
    {
        cout << "Cannot open the file." << endl;
        return 0;
    }
    else
        return 1;
}