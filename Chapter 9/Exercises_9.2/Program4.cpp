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

    try     // this block tries to open the file, read it,
            // and display the file's data
    {
        inFile.open(filename.c_str());

        if (inFile.fail()) throw filename;     // the exception being checked

         // Read and display the file's contents
        inFile >> descrip >> price;
        while (inFile.good()) // check next character
        {
            cout << descrip << ' ' << price << endl;
            inFile >> descrip >> price;
        }
        inFile.close();

        return 0;
    }
    catch (string nameOfFile)
    {
        cout << "\nThe file " << nameOfFile << " was not successfully opened."
             << "\n Please check that the file currently exists."
             << endl;
        exit(1);
    }
}