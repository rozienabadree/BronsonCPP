#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int getOpen(ofstream&); // function prototype - pass reference to an fstream
void inOut(ofstream&);  // function prototype - pass reference to an fstream

int main()
{
    ofstream outFile; // filename is an ofstream object

    getOpen(outFile); // open the file
    inOut(outFile);   // write to it

    return 0;
}

int getOpen(ofstream& fileOut)
{
    string name;
    char response;
    ifstream inFile; // Declare an ifstream object to check if the file exists

    cout << "Enter a file name: ";
    getline(cin, name);

    inFile.open(name.c_str()); // Open the file for input (checking if it exists)

    if (inFile.is_open()) // If the file exists
    {
        cout << "The file already exists. Do you want to overwrite it? (Y/N): ";
        cin >> response;

        if (response == 'N' || response == 'n')
        {
            cout << "Operation cancelled. Exiting..." << endl;
            inFile.close(); // Close the input file stream
            exit(1);
        }
    }

    fileOut.open(name.c_str()); // Open the file for writing

    return 1;
}

void inOut(ofstream& fileOut)
{
    const int NUMLINES = 2; // number of lines
    int count;
    string line;

    fileOut.seekp(0, ios::beg);

    cout << "Please enter two lines of text:" << endl;

    for (count = 0; count < NUMLINES; ++count)
    {
        getline(cin, line);
        fileOut << line << endl;
    }

    cout << "\nThe file has been successfully written.";

    return;
}