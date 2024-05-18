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

    try // this block tries to open the input file
    {
        // open a basic input stream
        inFile.open(fileOne.c_str());

        if (inFile.fail())
            throw fileOne;
    }                 // end of outer try block
    catch (string in) // catch for outer try block
    {
        cout << "The input file " << in
             << " was not successfully opened." << endl
             << " No backup was made." << endl;
        exit(1);
    }

    try // this block tries to open the output file and
    {   // perform all file processing
        outFile.open(fileTwo.c_str());

        if (outFile.fail())
            throw fileTwo;

        while ((ch = inFile.get()) != EOF)
            outFile.put(ch);

        inFile.close();
        outFile.close();
    }
    catch (string out) // catch for inner try block
    {
        cout << "The backup file " << out << " was not successfully opened." << endl;
        exit(1);
    }

    cout << "A successful backup of " << fileOne << " named " << fileTwo << " was successfully made." << endl;
    
    return 0;
}