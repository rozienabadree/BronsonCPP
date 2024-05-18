#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int fCheck(fstream &); // function prototype to check if file exists
void printLine(fstream&, int);  // function prototype to print line n of the file

int main()
{
    int exists, lineNum;
    fstream inFile; // filename of an ifstream object as specified by the problem

    exists = fCheck(inFile); // if the file exists, stream in the file & open it

    if (exists == 0)
        exit(1);
    else
    {
        cout << "Enter a line number to print: ";
        cin >> lineNum;
        printLine(inFile, lineNum); // call the printLine function to read the nth line of the file
        inFile.close();
    }

    return 0;
}

int fCheck(fstream& inFile)
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

void printLine(fstream& inFile, int lineNum)
{
    string line;
    inFile.seekg(0);    // reset the pointer to the beginning of the file

    for (int i = 1; i <= lineNum; ++i)
    {
        if (!getline(inFile, line))     // check to see that the line in the file exists
        {
            cout << "Line number " << lineNum << " does not exist in the file." << endl;
            return;
        }
    }

    cout << "Line " << lineNum << ": " << line << endl;

    return;
}