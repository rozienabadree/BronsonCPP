#include <iostream>
#include <fstream>
#include <cstdlib> // needed for exit()
#include <string>
using namespace std;

int main()
{
    string filename = "prices.dat"; // put the filename up front
    string descrip;
    double price;

    ifstream inFile;
    inFile.open(filename.c_str());
    if (inFile.fail()) // check for successful open
    {
        cout << "\nThe file was not successfully opened"
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }

    // Read and display the file's contents
    inFile >> descrip >> price;
    while (!inFile.eof()) // check next character
    {
        cout << descrip << ' ' << price << endl;
        inFile >> descrip >> price;
    }

    inFile.close();

    return 0;
}