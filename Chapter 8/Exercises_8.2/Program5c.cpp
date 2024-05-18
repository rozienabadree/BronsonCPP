#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputFile, outputFile, line;
    fstream inFile, outFile;

    cout << "Please enter the names of the input and output files: ";
    cin >> inputFile >> outputFile;

    inFile.open(inputFile.c_str());

    if (inFile.fail())
    {
        cout << "\nThe INPUT file was not successfully opened."
             << "\n Please check that the file currently exists."
             << endl;
        
        exit(1);
    }

    outFile.open(outputFile.c_str());

    if (outFile.fail())
    {
        cout << "\nThe OUTPUT file was not successfully opened."
             << "\n Please check that the file currently exists."
             << endl;

        exit(1);
    }

    while (getline(inFile, line))
    {
        outFile << line << endl;
    }

    inFile.close();
    cout << "The input file was successfully closed." << endl;
    outFile.close();
    cout << "The output file was successfully closed." << endl;

    return 0;
}