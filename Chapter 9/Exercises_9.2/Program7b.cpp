#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    string fileOne = "info.txt"; // put the filename up front
    string fileTwo = "info.bak";
    char ch;
    ifstream inFile;
    ofstream outFile;

    try
    {
        // try to open the input file
        inFile.open(fileOne.c_str());
        if (inFile.fail())
            throw fileOne;
    }
    catch (string in)
    {
        cout << "The input file " << in
             << " was not successfully opened." << endl
             << " No backup was made." << endl;
        exit(1);
    }

    try
    {
        // try to open the output file
        outFile.open(fileTwo.c_str());
        if (outFile.fail())
            throw fileTwo;

        // perform all file processing
        while ((ch = inFile.get()) != EOF)
            outFile.put(ch);

        inFile.close();
        outFile.close();
    }
    catch (string out)
    {
        cout << "The backup file " << out
             << " was not successfully opened." << endl;
        exit(1);
    }

    cout << "A successful backup of " << fileOne
         << " named " << fileTwo << " was successfully made." << endl;

    return 0;
}
